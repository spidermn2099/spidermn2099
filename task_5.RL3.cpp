#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Функции для каждого варианта
double f1(double x) { return sin(x) + cos(x) - 2 * atan(x); }
double f2(double x) { return log(x) + 3 * tan(x) + sqrt(x); }
double f3(double x) { return asin(x) - x + pow(x, 2) - 1; }
double f4(double x) { return exp(x) - sin(x) * cos(x); }
double f5(double x) { return cosh(pow(x, 2)) - acos(x); }
double f6(double x) { return acos(exp(-x)) - 2 * sin(x); }
double f7(double x) { return 1 / tan(2 * x) - 1 / (1 + pow(x, 2)); }
double f8(double x) { return sqrt(cos(x)) + log(sin(x)) - 0.5; }
double f9(double x) { return log(cosh(x)) - tanh(x) + 0.5; }
double f10(double x) { return exp(x) * tan(x) + sin(pow(x, 2)) + 0.1; }
double f11(double x) { return sin(log(x)) + x / tan(pow(x, 2)); }
double f12(double x) { return sinh(x) + acos(x) - 1.5; }
double f13(double x) { return sin(x) + tan(x) - 1 / (1 + pow(x, 2)); }
double f14(double x) { return exp(sin(x)) - sinh(asin(x)) - 2; }
double f15(double x) { return acos(exp(-(x + 1) * (x + 1))) + sin(x); }

// Функция выбора интервала
pair<double, double> getInterval(int variant) {
    switch (variant) {
        case 1: return {0, 1};
        case 2: return {2, 4};
        case 3: return {0, 1};
        case 4: return {-2, 0};
        case 5: return {-1, 1};
        case 6: return {1, 3};
        case 7: return {2, 3};
        case 8: return {0.5, 1.5};
        case 9: return {0, 2};
        case 10: return {-1, 0};
        case 11: return {0.5, 1.5};
        case 12: return {0, 1};
        case 13: return {-1, 1};
        case 14: return {-1, 1};
        case 15: return {-2, 2};
        default: return {0, 0};  // Некорректный вариант
    }
}

// Основная программа
int main() {
    int variant;
    cout << "Введите номер варианта (1-15): ";
    cin >> variant;

    // Выбираем соответствующую функцию
    double (*f)(double);
    switch (variant) {
        case 1: f = f1; break;
        case 2: f = f2; break;
        case 3: f = f3; break;
        case 4: f = f4; break;
        case 5: f = f5; break;
        case 6: f = f6; break;
        case 7: f = f7; break;
        case 8: f = f8; break;
        case 9: f = f9; break;
        case 10: f = f10; break;
        case 11: f = f11; break;
        case 12: f = f12; break;
        case 13: f = f13; break;
        case 14: f = f14; break;
        case 15: f = f15; break;
        default: 
            cout << "Некорректный вариант!" << endl;
            return 1;
    }

    // Получаем интервал для выбранной функции
    pair<double, double> interval = getInterval(variant);
    double a = interval.first;
    double b = interval.second;

    // Запрашиваем у пользователя количество частей для разделения интервала
    int parts;
    cout << "Введите количество частей, на которые нужно разделить область поиска корня: ";
    cin >> parts;

    // Вычисляем шаг
    double step = (b - a) / parts;

    // Перебор значений с шагом и поиск корня
    double min_f = abs(f(a));
    double root = a;

    for (double x = a; x <= b; x += step) {
        double fx = abs(f(x));
        if (fx < min_f) {
            min_f = fx;
            root = x;
        }
    }

    // Выводим результат
    cout << "Найденный корень: " << root << endl;
    cout << "Значение функции в корне: " << f(root) << endl;

    return 0;
}