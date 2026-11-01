#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <typeinfo>

#define NOMINMAX
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    auto j = 9;
    auto h = 0.2342;
    auto v = 'f';
    std::cout << "Тип данных j: " << typeid(j).name() << "\n";
    std::cout << "Тип данных h: " << typeid(h).name() << "\n";
    std::cout << "Тип данных v: " << typeid(v).name() << "\n";

    // Потеря точности при хранении числа 0.1
    float a_float = 0.1f;
    double d_double = 0.1;
    std::cout << std::setprecision(20);
    std::cout << "float  0.1: " << a_float << "\n";
    std::cout << "double 0.1: " << d_double << "\n";

    // Переполнение int
    int a_one = (std::numeric_limits<int>::max)();
    std::cout << "Максимальное число int: " << a_one << "\n";
    std::cout << "После добавления 1: " << a_one + 1 << "\n";

    // Переполнение unsigned int
    unsigned int b_one = (std::numeric_limits<unsigned int>::max)();
    std::cout << "Максимальное число unsigned int: " << b_one << "\n";
    std::cout << "После добавления 1: " << b_one + 1 << "\n";

    std::cout << "Размеры основных типов данных:\n";
    std::cout << "bool: " << sizeof(bool) << " байт\n";
    std::cout << "char: " << sizeof(char) << " байт\n";
    std::cout << "short: " << sizeof(short) << " байт\n";
    std::cout << "unsigned short: " << sizeof(unsigned short) << " байт\n";
    std::cout << "int: " << sizeof(int) << " байт\n";
    std::cout << "unsigned int: " << sizeof(unsigned int) << " байт\n";
    std::cout << "long: " << sizeof(long) << " байт\n";
    std::cout << "unsigned long: " << sizeof(unsigned long) << " байт\n";
    std::cout << "long long: " << sizeof(long long) << " байт\n";
    std::cout << "unsigned long long: " << sizeof(unsigned long long) << " байт\n";
    std::cout << "float: " << sizeof(float) << " байт\n";
    std::cout << "double: " << sizeof(double) << " байт\n";
    std::cout << "long double: " << sizeof(long double) << " байт\n";
    std::cout << "std::string: " << sizeof(std::string) << " байт\n";


    return 0;
}

