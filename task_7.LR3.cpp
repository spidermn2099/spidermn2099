#include <iostream>
#include <cmath>

using namespace std;

// Функция для проверки, является ли число числом Армстронга
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    
    // Подсчитываем количество цифр
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }
    
    originalNum = num;
    
    // Вычисляем сумму цифр, возведенных в степень количества цифр
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }
    
    return sum == num;
}

int main() {
    int limit;
    cout << "Введите верхний предел: ";
    cin >> limit;
    
    cout << "Числа Армстронга меньше " << limit << ": " << endl;
    
    // Перебираем числа от 1 до введенного лимита
    for (int i = 1; i < limit; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}