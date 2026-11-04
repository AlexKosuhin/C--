#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int age; // Возраст
    double sum_basket = 16000; // Сумма корзины
    bool promocode = true; // Наличие промокода
    bool status_account_block = false; // Статус блокировки
    bool have_goods = true; // Флаг наличия маркированных товаров
    double stock_balance = 50; // остаток товара на складе


    if (status_account_block) {
        std::cout << "Отклонение операции, у вас заблокирован аккаунт!\n";
    }
    else if (age < 18 && have_goods) {
        std::cout << "В оформление заказа отказано, есть товары с мариуровкой 18+ \n";
    }
    else if (stock_balance <= 0) {
        std::cout << "В оформление заказа отказано, на складе закончился товар\n";
    }
    else if (sum_basket >= 10000) {
        std::cout << "В вашей корзине товаров больше чем на 10_000, предоставляем вам скидку 15%. К оплате: " << sum_basket * (1 - 0.15);
    }
    else if (sum_basket >= 5000 && promocode) {
        std::cout << "В вашей корзине товаров больше чем на 5_000 и активный промокод, предоставляем вам скидку 10%. К оплате: " << sum_basket * (1 - 0.1);
    }
    else {
        std::cout << "К оплате: " << sum_basket;
    }
}

