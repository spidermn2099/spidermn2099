#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cout << "Введите длины сторон треугольника (x, y, z): ";
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x) {
        cout << "Треугольник существует" << endl;
    } else {
        cout << "Треугольник не существует" << endl;
    }

    return 0;
}