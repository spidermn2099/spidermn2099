#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double x2 = x * x;
    double x3 = x * x2;

    // Выражения
    double expr1 = 23 * x3 + 69 * x2 + 32 * x + 8;
    double expr2 = -23 * x3 + 69 * x2 - 32 * x + 8;

    cout << "23x^3 + 69x^2 + 32x + 8 = " << expr1 << endl;
    cout << "-23x^3 + 69x^2 - 32x + 8 = " << expr2 << endl;

    return 0;
}