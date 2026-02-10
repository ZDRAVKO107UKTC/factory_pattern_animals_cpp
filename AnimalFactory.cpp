#include "AnimalFactory.h"
#include "Dog.h"
#include "Cat.h"

#include <algorithm>
#include <cctype>
#include <string>

std::unique_ptr<Animal> AnimalFactory::create(const std::string& name) {
    std::string key = name;
    std::transform(key.begin(), key.end(), key.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });

    if (key == "dog") return std::make_unique<Dog>();
    if (key == "cat") return std::make_unique<Cat>();
    return nullptr;
}