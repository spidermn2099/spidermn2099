#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    vector<int> a(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long result = 0;  // Используем long long для предотвращения переполнения

    // Переменная для хранения текущего множителя (2^i)
    int multiplier = 1;

    // Вычисляем выражение
    for (int i = 0; i < n; ++i) {
        // Определяем знак (-1)^i
        int sign = (i % 2 == 0) ? 1 : -1;
        
        // Добавляем к результату текущий элемент с учётом знака и множителя
        result += sign * multiplier * a[i];
        
        // Увеличиваем множитель в два раза для следующего элемента
        multiplier *= 2;
    }

    // Выводим результат
    cout << "Результат: " << result << endl;

    return 0;
}