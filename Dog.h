#pragma once
#include "Animal.h"
#include <iostream>

class Dog final : public Animal {
public:
    void speak() const override {
        std::cout << "Dog says: Woof!" << std::endl;
    }
};
