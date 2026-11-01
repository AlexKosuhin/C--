#include <iostream>
#include <string>
#include <windows.h>
#include <chrono>

int main() {
    // Запускаем время
    auto start = std::chrono::steady_clock::now();

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::string name;
    int day, month, year, age;
    int current_day, current_month, current_year;
    char sep1, sep2, sep3, sep4;

    std::cout << "Введите имя: ";

    // ставим на паузу
    auto pause_start_1 = std::chrono::steady_clock::now();
    std::cin >> name; 
    auto pause_end_1 = std::chrono::steady_clock::now();
    // Продолжаем программу

    std::cout << "Привет, " << name << "\n";
    std::cout << "Введите свою дату рождения в формате ДД-ММ-ГГГГ: ";

    // ставим на паузу
    auto pause_start_2 = std::chrono::steady_clock::now();
    std::cin >> day >> sep1 >> month >> sep2 >> year;
    auto pause_end_2 = std::chrono::steady_clock::now();
    // Продолжаем программу

    std::cout << "Введите сегодняшную дату в формате ДД-ММ-ГГГГ: ";
    
    // ставим на паузу
    auto pause_start_3 = std::chrono::steady_clock::now();
    std::cin >> current_day >> sep3 >> current_month >> sep4 >> current_year;
    auto pause_end_3 = std::chrono::steady_clock::now();
    // Продолжаем программу

    // Вычисление количества лет
    if (current_month < month) {
        age = current_year - year - 1;
    }
    else if (current_month > month) {
        age = current_year - year;
    }
    else if (current_month == month && current_day < day) {
        age = current_year - year - 1; 

    }
    else if (current_month == month && current_day >= day) {
        age = current_year - year;
    }
    std::cout << "Возраст: " << age << std::endl;
    auto end = std::chrono::steady_clock::now();


    std::chrono::duration<double> total = end - start;
    std::chrono::duration<double> pause1 = pause_end_1 - pause_start_1;
    std::chrono::duration<double> pause2 = pause_end_2 - pause_start_2;
    std::chrono::duration<double> pause3 = pause_end_3 - pause_start_3;
    double result = total.count() - pause1.count() - pause2.count() - pause3.count();
    std::cout << "Время работы программы " << result << " секунд";
}



