#include <iostream>
#include <string>
#include <windows.h>
#include <chrono>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    auto start = std::chrono::steady_clock::now();

    std::string name;
    int day, month, year;
    char sep1, sep2;

    std::cout << "Введите своё имя: ";
    std::cin >> name;
    std::cout << "Привет, " << name <<"!\n";
    std::cout << "Введи свой день рождения в формате (ДД-ММ-ГГГГ): \n";
    std::cin >> day >> sep1 >> month >> sep2 >> year;
    auto end = std::chrono::steady_clock::now();

    //Вычисляем сколько прошло времени 
    std::chrono::duration<double> diff = end - start; 
    std::cout << "Время: " << diff.count() <<" секунд";


    return 0;
}

// int main() {
//     SetConsoleOutputCP(CP_UTF8);
//     SetConsoleCP(CP_UTF8);
//     int a = -10;
//     if (a >= 0) {
//         std::cout << "Число положительное";
//     }
//     else {
//         std::cout << "Число отрицательное";
//     } 
// }

