#include <iostream>
#include <iomanip>


int main() {
    float a = 0.1f;
    double b = 0.1;
    std::cout << std::setprecision(20);
    std::cout << "float: " << a << "\n";
    std::cout << "double: " << b << "\n";
}

