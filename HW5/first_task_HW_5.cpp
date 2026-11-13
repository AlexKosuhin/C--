#include <iostream>
#include <cmath>

template <typename T>
struct Vector2 {
    T x;
    T y;
};

template <typename T>
Vector2<T> operator+(const Vector2<T>& a, const Vector2<T>& b) {
    return {a.x + b.x, a.y + b.y};
}

template <typename T>
Vector2<T> operator-(const Vector2<T>& a, const Vector2<T>& b) {
    return {a.x - b.x, a.y - b.y};
}

template <typename T>
Vector2<T> operator*(const Vector2<T>& a, T h) {
    return {a.x * h, a.y * h};
}

template <typename T>
bool operator==(const Vector2<T>& a, const Vector2<T>& b) {
    return {a.x == b.x && a.y == b.y};
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const Vector2<T>& a) {
    out << "(" << a.x << ", " << a.y << ")";
    return out;
}

template <typename T>
double norm(const Vector2<T>& a) {
    return {std::sqrt(a.x * a.x + a.y * a.y)};
}

int main() {
    Vector2<int> a = {10, 20};
    Vector2<int> b = {3, 7};
    Vector2<int> g = a + b;
    Vector2<int> c = a - b;
    Vector2<int> d = a * 5;

    std::cout << g.x << " " << g.y << "\n";
    std::cout << c.x << " " << c.y << "\n";
    std::cout << d.x << " " << d.y << "\n";
    std::cout << (a == b) << "\n";
    std::cout << a << "\n";
    std::cout << norm(a);

}








