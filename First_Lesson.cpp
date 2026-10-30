#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string name;
    int day, month, year;
    char sep1, sep2;

    std::cout << "Введите своё имя: ";
    std::cin >> name;
    std::cout << "Привет, " << name <<"!\n";
    std::cout << "Введи свой день рождения в формате (ДД-ММ-ГГГГ): \n";
    std::cin >> day >> sep1 >> month >> sep2 >> year;


    return 0;
}