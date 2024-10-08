#include <iostream>
#include <cmath>

int main() {
    double x, y, C, K, A, D, S;
    
    std::cout << "Введите значения x, y, C, K: ";
    std::cin >> x >> y >> C >> K;
    
    A = x + y;
    D = std::abs(C - A);
    S = 10.1 + (A / C) + (D / pow(K, 2));
    
    std::cout << "Результат S: " << S << std::endl;
    
    return 0;
}