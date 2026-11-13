#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//Условие: дан вектор целых чисел. 
// Нужно удалить из него все отрицательные элементы, 
// отсортировать оставшиеся по возрастанию и вывести через пробел.


int main() {
    int temp;
    std::vector<int> A = {1, -8, 3, 5, -4, 9, -10, 94, 23};

    for (int i = 0; i < A.size();) {
        if (A[i] < 0) {
            A.erase(A.begin() + i);
        }
        else {
            i++;
        }
    }

    for (int k = 0; k < A.size() - 1; k++) {
        for (int i = 0; i < A.size() - 1 - k; i++) {
            if (A[i] > A[i+1]) {
                temp = A[i+1];
                A[i+1] = A[i];
                A[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < A.size(); i++) {
        std::cout << A[i] << " ";
    }
}



