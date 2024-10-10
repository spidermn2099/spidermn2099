#include <iostream>
#include <cmath>
using namespace std;

void task1() {
    int n;
    cout << "Введите N: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Ошибка ввода. Введите положительное целое число: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    double sum = 0;
    int i = 1;
    while (i <= n) {
        double ai, bi;
        if (i % 2 != 0) {
            ai = i;
            bi = pow(i, 2);
        } else {
            ai = i / 2.0;
            bi = pow(i, 3);
        }
        sum += pow((ai - bi / 30), 2);
        i++;
    }

    cout << "Результат вычисления N: " << sum << endl;
}

int main() {
    task1();
    return 0;
}