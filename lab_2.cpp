#include <iostream>
#include <cmath>

int main() {
    //Integer33 Дано кількість хвилин, що минуло з певного моменту часу. Визначити кількість повних минувших годин і хвилин після останньої години.
  //вводимо
    int total_minutes;
    std::cout << "Введіть кількість хвилин: ";
    std::cin >> total_minutes;

    //обчислюємо
    int hours = total_minutes / 60; 
    int minutes = total_minutes % 60;

    //виводимо
    std::cout << "Минуло: " << hours << " год. і " << minutes << " хв." << std::endl;


  //Boolean12. Дано три цілих числа: A, B, C. Перевірити істинність висловлювання: «Кожне з чисел A, B, C додатне».
   
  //вводимо змінні
    int A, B, C;
    std::cout << "Введіть ціле число A: ";
    std::cin >> A;
    std::cout << "Введіть ціле число B: ";
    std::cin >> B;
    std::cout << "Введіть ціле число C: ";
    std::cin >> C;
    
    //перевіряємо
    bool all_positive = (A > 0) && (B > 0) && (C > 0);

    //виведення
    if (all_positive) {
        std::cout << "Істина: Кожне з чисел A, B, C додатне." << std::endl;
    } else {
        std::cout << "Хибність: Не всі числа є додатними." << std::endl;
    }


    //вводимо змінні
    const double PI = acos(-1.0);
    double x;
    std::cout << "Enter x: ";
    std::cin >> x;
    //вирішуємо
    double cos_37 = cos(37.0 * PI / 180.0);

    double numerator = pow(log(2 * pow(x, 2) + cos_37), 3);
    
    double denominator = pow(sin(pow(x, 2)), 3) + sqrt(abs(4 - 2 * cos(x) - pow(sin(pow(x, 2)), 2)));

    double y = numerator / denominator;
    //виводмо відповідь
    std::cout << "y = " << y << std::endl;
    return 0;
}
