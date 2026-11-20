#include <algorithm>
#include <iostream>
#include <utility>
#include <cstddef>

class IntArray {
private:
//беззнаковый целочисленный тип
    std::size_t size_;
    int* data_;

public:
    explicit IntArray(std::size_t n)
        : size_(n), data_(n > 0 ? new int[n]{} : nullptr) {}

    ~IntArray() {
        delete[] data_;
    }

    IntArray(const IntArray& other)
        : size_(other.size_),
          data_(other.size_ > 0 ? new int[other.size_] : nullptr) {
        if (size_ > 0) {
            std::copy_n(other.data_, size_, data_);
        }
    }

    IntArray& operator=(const IntArray& other) {
        if (this != &other) {
            IntArray temp(other);
            swap(temp);
        }
        return *this;
    }

    IntArray(IntArray&& other) noexcept
        : size_(other.size_), data_(other.data_) {
        other.size_ = 0;
        other.data_ = nullptr;
    }

    IntArray& operator=(IntArray&& other) noexcept {
        if (this != &other) {
            delete[] data_;
            size_ = other.size_;
            data_ = other.data_;
            other.size_ = 0;
            other.data_ = nullptr;
        }
        return *this;
    }

    void swap(IntArray& other) noexcept {
        std::swap(size_, other.size_);
        std::swap(data_, other.data_);
    }

    int& operator[](std::size_t index) {
        return data_[index];
    }

    const int& operator[](std::size_t index) const {
        return data_[index];
    }

    std::size_t size() const noexcept {
        return size_;
    }
};

int main() {
    IntArray a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    IntArray b = a;             
    b[0] = 99;                 

    IntArray c(1);
    c = b;                   
    c = c;                   

    IntArray d = std::move(c);

    IntArray e(2);
    e = std::move(d);        
    const IntArray& read_only = e;
    std::cout << "a[0] = " << a[0] << '\n';
    std::cout << "b[0] = " << b[0] << '\n';
    std::cout << "e[0] = " << read_only[0] << '\n';
    std::cout << "e.size() = " << e.size() << '\n';
    std::cout << "c.size() = " << c.size() << '\n';
    std::cout << "d.size() = " << d.size() << '\n';
}
