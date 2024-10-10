#include <iostream>
#include <cmath>
using namespace std;

void task3() {
    const double A = 0;
    const double B = M_PI / 2;
    const int M = 20;
    const double H = (B - A) / M;

    cout << "Значения функции y = sin(x) - cos(x) на отрезке [0, π/2]:\n";
    for (int i = 0; i <= M; ++i) {
        double x = A + i * H;
        double y = sin(x) - cos(x);
        cout << "X" << i << " = " << x << ", y = " << y << endl;
    }
}

int main() {
    task3();
    return 0;
}