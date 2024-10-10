#include <iostream>
using namespace std;

void task2() {
    double epsilon = 0.001;
    double sum = 0;
    int n = 1;
    double term;

    do {
        term = 1.0 / (2 * n) + 1.0 / (3 * n);
        sum += term;
        n++;
    } while (term >= epsilon);

    cout << "Сумма ряда: " << sum << endl;
}

int main() {
    task2();
    return 0;
}