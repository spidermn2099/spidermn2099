#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    
    cout << "Введите число для вычисления факториала: ";
    cin >> n;
    
    cout << "Шаг 0: factorial = " << factorial << endl;
    
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        cout << "Шаг " << i << ": factorial = " << factorial << endl;
    }
    
    cout << "Факториал числа " << n << " равен " << factorial << endl;

    return 0;
}