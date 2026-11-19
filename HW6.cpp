#include <iostream>
#include <cstdint>
enum class Status : std::uint8_t {
    CREATED,
    PAID,
    SHIPPED,
    DELIVERED,
    CANCELLED
};

struct Order {
    int id;
    double price;
    Status status;
};

bool canmovie(Status from, Status to) {
    if (from == Status::CREATED) {
        if (to == Status::PAID || to == Status::CANCELLED) {
            return true;
        }
    }
    else if (from == Status::PAID) {
        if (to == Status::CANCELLED || to == Status::SHIPPED) {
            return true;
        }
    }
    else if (from == Status::SHIPPED) {
        if (to == Status::DELIVERED) {
            return true;
        }
    }
    return false;
}

int main() {
    Order a = {101, 250, Status::CREATED};
    std::cout << canmovie(a.status, Status::PAID) << "\n";
    std::cout << canmovie(a.status, Status::DELIVERED) << "\n";

} 

