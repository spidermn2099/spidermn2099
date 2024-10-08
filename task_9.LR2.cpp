#include <iostream>
#include <cmath>
using namespace std;

// Определение функций для φ(x) в зависимости от условия
double phi(double z) {
    if (z < 1) {
        return pow(z, 2);
    } else {
        return z + 1;
    }
}

// Функция для вычисления y в зависимости от выбора
double calculateY(int choice, double x, double a, double b, double c, double d) {
    double y = 0;
    double z = x;  // Подставим z = x для удобства

    switch(choice) {
        case 1:
            y = a * log(1 + pow(x, 1.0 / 5)) + pow(cos(pow(phi(z) + 1, 2)), 2);
            cout << "Выполнено для функции 1" << endl;
            break;
        case 2:
            y = (2 * a * phi(x) + b * cos(sqrt(fabs(x)))) / (x * x + 5);
            cout << "Выполнено для функции 2" << endl;
            break;
        case 3:
            y = -M_PI * phi(x) + a * pow(cos(x * x * x), 2) + b * sin(x * x * x);
            cout << "Выполнено для функции 3" << endl;
            break;
        case 4:
            y = 2 * a * pow(cos(x * x * x), 2) + pow(sin(x * x * x), 2) - b * phi(x);
            cout << "Выполнено для функции 4" << endl;
            break;
        case 5:
            y = a * phi(x) - log(x + 2.5) + b * (exp(-x) - exp(x));
            cout << "Выполнено для функции 5" << endl;
            break;
        case 6:
            y = (2.0 / 3.0) * a * pow(sin(x), 2) - (3 * b / 4) * pow(cos(phi(x)), 2);
            cout << "Выполнено для функции 6" << endl;
            break;
        case 7:
            y = pow(sin(phi(x) + d * d + x * x), 3);
            cout << "Выполнено для функции 7" << endl;
            break;
        case 8:
            y = pow(sin(phi(x)), 2) + a * pow(cos(x * x * x), 3) + c * log(pow(x, 2.0 / 5.0));
            cout << "Выполнено для функции 8" << endl;
            break;
        case 9:
            y = (b * phi(x)) / cos(x) + a * log(fabs(tan(x / 2)));
            cout << "Выполнено для функции 9" << endl;
            break;
        default:
            cout << "Некорректный выбор функции!" << endl;
            break;
    }

    return y;
}

int main() {
    double x, a, b, c, d;
    int choice;

    // Ввод значений для x, a, b, c, d
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    cout << "Введите значение d: ";
    cin >> d;

    // Ввод порядкового номера функции
    cout << "Выберите номер функции (1-9): ";
    cin >> choice;

    // Вычисление и вывод результата
    double result = calculateY(choice, x, a, b, c, d);
    cout << "Результат y = " << result << endl;

    return 0;
}