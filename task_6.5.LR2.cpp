#include <iostream>
#include <cmath>

int main() {
    double x, y, xi, K, C, D, A, B, T;
    
    std::cout << "Введите значения x, y, xi, K, C, D: ";
    std::cin >> x >> y >> xi >> K >> C >> D;
    
    A = x - y;
    B = sqrt(xi);
    T = cos(x) + (pow(A, 2) / (K - C * D)) - B;
    
    std::cout << "Результат T: " << T << std::endl;
    
    return 0;
}