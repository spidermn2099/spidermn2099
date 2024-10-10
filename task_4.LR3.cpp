#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления ряда Тейлора для sin(x)
double taylor_sin(double x, int n) {
    double sum = 0;
    double term = x; // первый член ряда (x)
    int sign = 1;

    for (int i = 1; i <= n; ++i) {
        sum += sign * term;
        term *= x * x / ((2 * i) * (2 * i + 1)); // вычисляем следующий член ряда
        sign *= -1; // чередуем знак
    }

    return sum;
}

int main() {
    int n, count;
    
    // Запрашиваем количество членов ряда
    cout << "Введите количество членов ряда (n): ";
    cin >> n;

    // Запрашиваем количество чисел для вычисления функции
    cout << "Введите количество чисел, для которых нужно посчитать функцию: ";
    cin >> count;

    for (int i = 0; i < count; ++i) {
        double x;
        cout << "Введите значение x (от 0.1 до 1): ";
        cin >> x;

        // Проверка на корректность ввода
        if (x < 0.1 || x > 1) {
            cout << "Некорректное значение x. Введите значение от 0.1 до 1." << endl;
            --i;
            continue;
        }

        // Вычисляем значение функции через ряд Тейлора
        double taylor_result = taylor_sin(x, n);
        
        // Вычисляем точное значение функции через стандартную библиотеку
        double exact_result = sin(x);

        // Выводим результаты
        cout << "Значение sin(x) через ряд Тейлора: " << taylor_result << endl;
        cout << "Точное значение sin(x): " << exact_result << endl;
    }

    return 0;
}