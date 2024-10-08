#include <iostream>
using namespace std;

int main() {
    int h1, min1, h2, min2;
    
    // Ввод времени начала и окончания
    cout << "Введите время начала (часы и минуты): ";
    cin >> h1 >> min1;
    cout << "Введите время окончания (часы и минуты): ";
    cin >> h2 >> min2;
    
    // Перевод времени в минуты с начала суток
    int startMinutes = h1 * 60 + min1;
    int endMinutes = h2 * 60 + min2;
    
    // Вычисление затраченного времени
    int duration;
    if (endMinutes >= startMinutes) {
        duration = endMinutes - startMinutes;
    } else {
        duration = (24 * 60 - startMinutes) + endMinutes;
    }
    
    // Вывод результата
    int hours = duration / 60;
    int minutes = duration % 60;
    cout << "Студент решал задачи " << hours << " часов и " << minutes << " минут." << endl;

    return 0;
}