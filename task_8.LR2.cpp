#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления длины стороны
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Функция для вычисления площади треугольника по формуле Герона
double triangle_area(double a, double b, double c) {
    double s = (a + b + c) / 2;  // Полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Высота треугольника
double height(double a, double area) {
    return 2 * area / a;
}

// Медиана треугольника
double median(double a, double b, double c) {
    return 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
}

// Биссектриса треугольника
double bisector(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return (2 * sqrt(b * c * p * (p - a))) / (b + c);
}

// Радиус вписанной окружности
double inradius(double area, double a, double b, double c) {
    double s = (a + b + c) / 2;
    return area / s;
}

// Радиус описанной окружности
double circumradius(double a, double b, double c) {
    double area = triangle_area(a, b, c);
    return (a * b * c) / (4 * area);
}

int main() {
    // Ввод координат вершин треугольника
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершины A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины B (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины C (x3 y3): ";
    cin >> x3 >> y3;

    // Вычисление длин сторон
    double AB = distance(x1, y1, x2, y2);
    double BC = distance(x2, y2, x3, y3);
    double CA = distance(x3, y3, x1, y1);

    // Проверка существования треугольника
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        cout << "Треугольник существует.\n";

        // Площадь треугольника
        double area = triangle_area(AB, BC, CA);

        // Длины высот
        double hA = height(BC, area);
        double hB = height(CA, area);
        double hC = height(AB, area);

        // Длины медиан
        double mA = median(BC, CA, AB);
        double mB = median(CA, AB, BC);
        double mC = median(AB, BC, CA);

        // Длины биссектрис
        double bA = bisector(AB, BC, CA);
        double bB = bisector(BC, CA, AB);
        double bC = bisector(CA, AB, BC);

        // Радиусы вписанной и описанной окружностей
        double in_r = inradius(area, AB, BC, CA);
        double circum_r = circumradius(AB, BC, CA);

        // Вывод результатов
        cout << "Длины сторон: AB = " << AB << ", BC = " << BC << ", CA = " << CA << endl;
        cout << "Высоты: hA = " << hA << ", hB = " << hB << ", hC = " << hC << endl;
        cout << "Медианы: mA = " << mA << ", mB = " << mB << ", mC = " << mC << endl;
        cout << "Биссектрисы: bA = " << bA << ", bB = " << bB << ", bC = " << bC << endl;
        cout << "Радиус вписанной окружности: " << in_r << endl;
        cout << "Радиус описанной окружности: " << circum_r << endl;
        cout << "Площадь треугольника: " << area << endl;
    } else {
        cout << "Треугольник не существует." << endl;
    }

    return 0;
}