#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите значения a, b и c для уравнения ax^4 + bx^2 + c = 0: ";
    std::cin >> a >> b >> c;

    // Решаем как квадратное уравнение для y = x^2
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "Нет вещественных решений." << std::endl;
    } else {
        double y1 = (-b + sqrt(discriminant)) / (2 * a);
        double y2 = (-b - sqrt(discriminant)) / (2 * a);

        // Проверяем возможные значения для x^2
        if (y1 >= 0) {
            double x1 = sqrt(y1);
            double x2 = -sqrt(y1);
            std::cout << "Решения: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        if (y2 >= 0) {
            double x3 = sqrt(y2);
            double x4 = -sqrt(y2);
            std::cout << "Решения: x3 = " << x3 << ", x4 = " << x4 << std::endl;
        }
        if (y1 < 0 && y2 < 0) {
            std::cout << "Нет вещественных решений." << std::endl;
        }
    }

    return 0;
}