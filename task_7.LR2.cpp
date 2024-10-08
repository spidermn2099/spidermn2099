#include <iostream>
#include <cmath>  // Для функции pow

int main() {
    // Ввод переменных
    double a = -13.8, b = -8.9, c = 25.0;
    int N;

    std::cout << "Введите значение N: ";
    std::cin >> N;

    double Y;
    switch (N) {
        case 2:
            Y = pow(a, 4) - b;
            break;
        case 56:
            Y = b - pow(c, 2);
            break;
        case 7:
            Y = pow(a, 4) - c;
            break;
        case 3:
            Y = a - b * c;
            break;
        default:
            Y = pow(a + b, 3);
            break;
    }

    std::cout << "Значение Y: " << Y << std::endl;

    return 0;
}