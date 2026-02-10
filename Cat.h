#pragma once
#include "Animal.h"
#include <iostream>

class Cat final : public Animal {
public:
    void speak() const override {
        std::cout << "Cat says: Meow!" << std::endl;
    }
};
