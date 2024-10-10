#include <iostream>

using namespace std;

// Функция для вычисления sin(x) через разложение в ряд Тейлора
double mySin(double x) {
    double term = x;  // Первое слагаемое
    double sum = term;
    int n = 1; // Степень

    // Добавляем слагаемые ряда, пока они велики
    while (term > 1e-6 || term < -1e-6) {
        term *= (-1) * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

// Функция для вычисления cos(x) через разложение в ряд Тейлора
double myCos(double x) {
    double term = 1;  // Первое слагаемое
    double sum = term;
    int n = 1; // Степень

    // Добавляем слагаемые ряда, пока они велики
    while (term > 1e-6 || term < -1e-6) {
        term *= (-1) * x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }

    return sum;
}

// Функция для вычисления ln(|x|) через разложение в ряд Тейлора (только для x > 1)
double myLog(double x) {
    if (x <= 0) return -1e9;  // Псевдозначение для ln отрицательных чисел

    double term = (x - 1) / (x + 1);
    double sum = 2 * term;
    double sqTerm = term * term;
    int n = 1;

    while (term > 1e-6 || term < -1e-6) {
        term *= sqTerm * (2 * n - 1) / (2 * n + 1);
        sum += 2 * term;
        n++;
    }

    return sum;
}

// Функция нахождения минимального значения
double min(double a, double b, double c) {
    return (a < b && a < c) ? a : (b < c) ? b : c;
}

int main() {
    double x;
    cout << "Введите x: ";
    cin >> x;

    double a = mySin(x);
    double b = myCos(x);
    double c = myLog(x);

    cout << "sin(x) = " << a << endl;
    cout << "cos(x) = " << b << endl;
    cout << "ln(|x|) = " << c << endl;

    double minimum = min(a, b, c);
    cout << "Минимальное значение: " << minimum << endl;

    return 0;
}