#include "AnimalFactory.h"
#include "Animal.h"
#include <iostream>

int main() {
    auto dog = AnimalFactory::create("dog");
    if (dog) dog->speak();

    auto cat = AnimalFactory::create("cat");
    if (cat) cat->speak();

    auto unknown = AnimalFactory::create("lion");
    if (!unknown) {
        std::cout << "Unknown animal!" << std::endl;
    }

    return 0;
}