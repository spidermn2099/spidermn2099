#include <iostream>
#include <cmath>

int main() {
    double x, C, K, A, B, Y;
    
    std::cout << "Введите значения x, C, K: ";
    std::cin >> x >> C >> K;
    
    A = log(x);
    B = x + exp(x);
    Y = (A + B) - (pow(C, 2) / K);
    
    std::cout << "Результат Y: " << Y << std::endl;
    
    return 0;
}