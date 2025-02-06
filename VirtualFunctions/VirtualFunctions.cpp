#include "Animal.hpp"

void Animal::speak() const {
    std::cout << "Animal sound" << std::endl;
}

void Dog::speak() const {
    std::cout << "Woof!" << std::endl;
}

void Cat::speak() const {
    std::cout << "Meow!" << std::endl;
}

void runVirtualFunctionDemo() {
    Animal* animals[] = { new Dog(), new Cat() };
    for (auto* animal : animals) {
        animal->speak();
        delete animal;
    }
}