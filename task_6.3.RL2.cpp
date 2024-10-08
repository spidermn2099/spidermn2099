#include <iostream>
#include <cmath>

int main() {
    double x, p, k, K, D, C, A, B, Y;
    
    std::cout << "Введите значения x, p, k, K, D, C: ";
    std::cin >> x >> p >> k >> K >> D >> C;
    
    A = x + sin(p);
    B = exp(k);
    Y = 1 + (pow(K, 2) / (2 * A * B)) - B + D * C;
    
    std::cout << "Результат Y: " << Y << std::endl;
    
    return 0;
}