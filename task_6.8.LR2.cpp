#include <iostream>
#include <cmath>

int main() {
    double x, p, h, K, C, D, A, B, Y;
    
    std::cout << "Введите значения x, p, h, K, C, D: ";
    std::cin >> x >> p >> h >> K >> C >> D;
    
    A = x - p;
    B = log(h);
    Y = 0.78 * B + (pow(A, 3) / (K * C * D));
    
    std::cout << "Результат Y: " << Y << std::endl;
    
    return 0;
}