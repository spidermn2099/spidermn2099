#include <iostream>
#include <cmath>

int main() {
    double x, p, n, K, D, B, C, Q;
    
    std::cout << "Введите значения x, p, n, K, D: ";
    std::cin >> x >> p >> n >> K >> D;
    
    B = cos(x);
    C = p - n;
    Q = (pow(B, 2) / (K * D)) + B * pow(C, 3);
    
    std::cout << "Результат Q: " << Q << std::endl;
    
    return 0;
}