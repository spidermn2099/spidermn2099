#include <iostream>
#include <cmath>

int main() {
    double x, D, A, b, S;
    
    std::cout << "Введите значения x и D: ";
    std::cin >> x >> D;
    
    b = x + D;
    A = (D * x) / b;
    S = (pow(A, 2) + b * cos(x)) / (pow(D, 3) + (A + D - b));
    
    std::cout << "Результат S: " << S << std::endl;
    
    return 0;
}