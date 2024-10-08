#include <iostream>
#include <cmath>

int main() {
    double n, m, x, K, A, D, Y;
    
    std::cout << "Введите значения n, m, x, K: ";
    std::cin >> n >> m >> x >> K;
    
    A = std::abs(n + m);
    D = tan(x);
    Y = 1.29 + (K / A) + pow(D, 2);
    
    std::cout << "Результат Y: " << Y << std::endl;
    
    return 0;
}