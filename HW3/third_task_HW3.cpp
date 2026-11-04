#include <iostream>
#include <windows.h>
#include <functional>

double discount_n(double price, double disc) {return (1 - disc/100) * price;}



double apply_price(
    double price,
    double disc,
    std::function<double(double, double)> operation) {
    return operation(price, disc);
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double quantity;
    double price;
    double discount;

    std::cout << "Введите количество товара: ";
    std::cin >> quantity;
    std::cout << "Введите цену за 1 единицу товара: ";
    std::cin >> price;
    std::cout << "Введите скидку в %: ";
    std::cin >> discount;
    
    double result = apply_price(price, discount, discount_n);
    double total_sum = result * quantity;
    std::cout << "Итоговая сумма: " << total_sum;
}


