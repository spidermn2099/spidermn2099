#include <iostream>
using namespace std;

int main() {
    int X, Y;
    double A, B, C, K;
    cout << "Введите значения X и Y (целые числа): ";
    cin >> X >> Y;
    cout << "Введите значения A, B, C (вещественные числа): ";
    cin >> A >> B >> C;
    cout << "Введите значение K: ";
    cin >> K;

    // Замена X и Y
    if (X == Y) {
        X = 0;
        Y = 0;
    } else if (X < Y) {
        X = 0;
    } else {
        Y = 0;
    }

    // Уменьшение наибольшего из A, B, C
    if (A > B && A > C) {
        A -= K;
    } else if (B > A && B > C) {
        B -= K;
    } else {
        C -= K;
    }

    cout << "X = " << X << ", Y = " << Y << endl;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    return 0;
}