#include <iostream>
#include <windows.h>
#include <chrono>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int N = 10000;
    static short A[N][N];
    long long sum_str = 0;
    long long sum_col = 0;
    
    // Заполняем матрицу "1"
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = 1;
        }
    }
    // Считаем сумма по строкам -> столбцам
    auto start1 = std::chrono::steady_clock::now();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum_str = sum_str + A[i][j];
        }
    }

    auto end1 = std::chrono::steady_clock::now();
    std::chrono::duration<double> time_str = end1 - start1;
    std::cout << "Сумма: " << sum_str << std::endl;
    std::cout << "Для подсчета суммы через строки -> столбцы потребовалось: " << time_str.count() << " секунд\n";


    // Считаем сумму по столбцам -> строкам
    auto start2 = std::chrono::steady_clock::now();
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            sum_col = sum_col + A[i][j];
        }
    }
    auto end2 = std::chrono::steady_clock::now();
    std::chrono::duration<double> time_col = end2 - start2;
    std::cout << "Сумма: " << sum_col << std::endl;
    std::cout << "Для подсчета суммы через столбцы -> строки потребовалось: " << time_col.count() << " секунд\n";

}
// БЕЗ ОПТИМИЗАЦИИ КОМПИЛЯТОРА:
// Обход по строкам:    0.0669625 секунд
// Обход по столбцам:   0.388094 секунд
//
// С ОПТИМИЗАЦИЕЙ КОМПИЛЯТОРА (-O2):
// Обход по строкам:    0.0269176 секунд
// Обход по столбцам:   0.632542 секунд

