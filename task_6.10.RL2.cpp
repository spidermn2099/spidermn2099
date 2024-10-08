#include <iostream>
#include <cmath>

int main() {
    double x, k, C, D, xi, A, B, Y;
    
    // Ввод значений
    std::cout << "Введите значения x, k, C, D, xi: ";
    std::cin >> x >> k >> C >> D >> xi;
    
    // Вычисление A и B
    A = log(x) - k;
    B = sqrt(xi);
    
    // Вычисление Y
    Y = pow(D, 2) + (pow(C, 2) / (0.75 * A)) + B;
    
    // Вывод результата
    std::cout << "Результат Y: " << Y << std::endl;
    
    return 0;
}