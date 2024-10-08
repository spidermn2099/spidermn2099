#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите коэффициенты a, b и c для уравнения ax^4 + bx^2 + c = 0: ";
    cin >> a >> b >> c;
    
    // Решаем квадратичное уравнение относительно z: az^2 + bz + c = 0
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant < 0) {
        cout << "Корней нет." << endl;
    } else if (discriminant == 0) {
        double z = -b / (2 * a);
        if (z >= 0) {
            cout << "x1 = " << sqrt(z) << ", x2 = " << -sqrt(z) << endl;
        } else {
            cout << "Корней нет." << endl;
        }
    } else {
        double z1 = (-b + sqrt(discriminant)) / (2 * a);
        double z2 = (-b - sqrt(discriminant)) / (2 * a);
        if (z1 >= 0) {
            cout << "x1 = " << sqrt(z1) << ", x2 = " << -sqrt(z1) << endl;
        }
        if (z2 >= 0) {
            cout << "x3 = " << sqrt(z2) << ", x4 = " << -sqrt(z2) << endl;
        }
    }

    return 0;
}