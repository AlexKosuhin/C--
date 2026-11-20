#include <iostream>
#include <string>

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
private:
    std::string name_;

public:
    explicit Dog(const std::string& name) : name_(name) {}

    void makeSound() const override {
        std::cout << "Dog " << name_ << ": Woof!\n";
    }
};

class Cat : public Animal {
private:
    int age_;

public:
    explicit Cat(int age) : age_(age) {}

    void makeSound() const override {
        std::cout << "Cat (age " << age_ << "): Meow!\n";
    }
};

class Cow : public Animal {
private:
    double weight_;

public:
    explicit Cow(double weight) : weight_(weight) {}

    void makeSound() const override {
        std::cout << "Cow (weight " << weight_ << " kg): Moo!\n";
    }
};


void makeAnimalSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    Dog dog("Buddy");
    Cat cat(3);
    Cow cow(420.5);

    makeAnimalSound(dog);
    makeAnimalSound(cat);
    makeAnimalSound(cow);
}
