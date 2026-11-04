#include <iostream>
#include <windows.h>

// Если год делится на 400 — он високосный.
// Иначе, если год делится на 100 — он не високосный.
// Иначе, если год делится на 4 — он високосный.
// Во всех остальных случаях — обычный.


void year_func(int year) {
    if (year % 400 == 0) {
        std::cout << "Год високосный";
    }
    else if (year % 100 == 0) {
        std::cout << "Год НЕ високосный";
    }
    else if (year % 4 == 0) {
        std::cout << "Год високосный";
    }
    else {
        std::cout << "Год НЕ високосный";
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int year;

    std::cout << "Введите год: ";
    std::cin >> year;
    year_func(year);

}