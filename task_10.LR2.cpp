#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, r, x2, y2, R;
    
    // Ввод координат и радиусов кругов
    cout << "Введите координаты центра первого круга (x1, y1) и радиус r: ";
    cin >> x1 >> y1 >> r;
    cout << "Введите координаты центра второго круга (x2, y2) и радиус R: ";
    cin >> x2 >> y2 >> R;
    
    // Вычисление расстояния между центрами
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Проверка условий
    if (d + r <= R) {
        cout << "Да, круг M1 попадает в круг M2" << endl;
    } else if (d + R <= r) {
        cout << "Да, но справедливо обратное для двух фигур" << endl;
    } else if (d < r + R && d > abs(r - R)) {
        cout << "Фигуры пересекаются" << endl;
    } else {
        cout << "Ни одно условие не выполнено" << endl;
    }

    return 0;
}