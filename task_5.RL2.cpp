#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cout << "Введите X и Y: ";
    cin >> X >> Y;

    double max = (X > Y) ? X : Y;

    cout << "Максимальное значение: " << max << endl;

    return 0;
}