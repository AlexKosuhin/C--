
#include <iostream>
#include <windows.h>
#include <chrono>
#include <cmath>

int main() {
    auto start = std::chrono::steady_clock::now();

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    double e = 1e-9;

    std::cout << "Введите первое число: ";
    auto pause_start_1 = std::chrono::steady_clock::now();
    std::cin >> a;
    auto pause_end_1 = std::chrono::steady_clock::now();

    std::cout << "Введите второе число: ";
    auto pause_start_2 = std::chrono::steady_clock::now();
    std::cin >> b;
    auto pause_end_2 = std::chrono::steady_clock::now();

    // Сравнение чисел
    if (std::abs(a - b) < e) {
        std::cout << "Числа " << a << " и " << b << " равны" << std::endl;
    }

    else if (a > b) {
        std::cout << "Число " << a << " больше числа " << b << std::endl;
    }
   
    else {
        std::cout << "Число " << b << " больше числа " << a << std::endl;
    }

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double> total = end - start;
    std::chrono::duration<double> pause1 = pause_end_1 - pause_start_1;
    std::chrono::duration<double> pause2 = pause_end_2 - pause_start_2;
    double result = total.count() - pause1.count() - pause2.count();
    
    std::cout << "Время выполнения программы: " << result << " секунд";
}
