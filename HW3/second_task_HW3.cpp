#include <iostream>
#include <windows.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void print_deliter(int x) {
    for (int i=1; i<=x; i++) {
        if (x % i == 0) {
            std::cout << i << " ";
        }
    } 
}


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Факториал
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;
    long long result = factorial(n);
    std::cout << "Факториал числа: " << result << std::endl;

    // Фибоначчи
    int h;
    std::cout << "Введите число n: ";
    std::cin >> h;
    for (int i=0; i<=h; i++) {
        int res = fibonacci(i);
        std::cout << res << " ";
    }
    std::cout << std::endl;

    // Делители числа
    int x;
    std::cout << "Введите число n: ";
    std::cin >> x;
    std::cout << "Делители числа " << x << std::endl;
    print_deliter(x);

}