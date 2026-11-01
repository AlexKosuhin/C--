#include <iostream>
#include <string>
#include <windows.h>
#include <limits>
#include <iomanip>

//  * Определить размеры всех основных типов на вашей системе.
//  * Показать переполнение целочисленных типов.
//  * Продемонстрировать потерю точности (float vs double).
//  * Использовать auto в разных контекстах.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a = 1;
    int b = 10;
    float c = 1.4;
    float f = 0.9234;
    std::string one = "Hello";
    std::string two = "Goodbye";
    bool t = true;
    bool fa = false;
    double dob_1 = 1.5416020149;
    double dob_2 = -0.23490;
    long double long_double_1 = 0.57666390213423;
    long double long_double_2 = -2.578012342;
    char char_1 = 'w';
    char char_2 = '4';
    short a_1 = 102;
    short a_2 = -23;
    long long l_1 = 5692709814351;
    long long l_2 = -134985124123423;
    unsigned int y = 100;
    unsigned long long z = 100000000000;

    // Использование auto
    auto j = 9;
    auto h = 0.2342;
    auto v = 'f';
    std::cout << "Тип данных j: " << typeid(j).name() << "\n";
    std::cout << "Тип данных h: " << typeid(h).name() << "\n";
    std::cout << "Тип данных v: " << typeid(v).name() << "\n";
    
    // Потеря точности
    float a_float = 0.1;
    double d_double = 0.1;
    std::cout << std::setprecision(20);
    std::cout << a_float << "\n";
    std::cout << d_double << "\n";

    // Переполнение целого типа
    int a_one = (std::numeric_limits<int>::max)();
    std::cout << "Максимальное число: " << a_one << "\n";
    a_one = a_one + 1;
    std::cout << "После добавления 1: " << a_one << "\n";
    // Переполнение unsigned int
    unsigned int b_one = (std::numeric_limits<unsigned int>::max)();
    std::cout << "Максимальное число(unsigned int): " << b_one << "\n";
    b_one = b_one + 1;
    std::cout << "После добавления 1: " << b_one << "\n";

    // Размеры типов данных
    std::cout << "Размер переменной a=1: " << sizeof(a) << " Байт\n";
    std::cout << "Размер переменной b=10: " << sizeof(b) << " Байт\n";

    std::cout << "Размер переменной c=1.4: " << sizeof(c) << " Байт\n";
    std::cout << "Размер переменной f=0.9234: " << sizeof(f) << " Байт\n";

    std::cout << "Размер переменной one = 'Hello' " << sizeof(one) << " Байт\n";
    std::cout << "Размер переменной two = 'Googbye' " << sizeof(two) << " Байт\n";

    std::cout << "Размер переменной t = 'true' " << sizeof(t) << " Байт\n";
    std::cout << "Размер переменной fa = 'false' " << sizeof(fa) << " Байт\n";

    std::cout << "Размер переменной dob_1 = 1.5416020149 " << sizeof(dob_1) << " Байт\n";
    std::cout << "Размер переменной dob_2 = -0.23490 " << sizeof(dob_2) << " Байт\n";

    std::cout << "Размер переменной long_double_1 = 0.57666390213423 " << sizeof(long_double_1) << " Байт\n";
    std::cout << "Размер переменной long_double_2 = -2.578012342 " << sizeof(long_double_2) << " Байт\n";

    std::cout << "Размер переменной char_1 = 'w' " << sizeof(char_1) << " Байт\n";
    std::cout << "Размер переменной char_2 = '4' " << sizeof(char_2) << " Байт\n";

    std::cout << "Размер переменной a_1 = 102 " << sizeof(a_1) << " Байт\n";
    std::cout << "Размер переменной a_2 = 23 " << sizeof(a_2) << " Байт\n";

    std::cout << "Размер переменной l_1 = 5692709814351 " << sizeof(l_1) << " Байт\n";
    std::cout << "Размер переменной l_2 = -134985124123423 " << sizeof(l_2) << " Байт\n";

    std::cout << "Размер переменной y = 100 " << sizeof(y) << " Байт\n";
    std::cout << "Размер переменной z = 100000000000L " << sizeof(z) << " Байт\n";

    return 0;
}

