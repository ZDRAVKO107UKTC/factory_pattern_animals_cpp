#pragma once
#include <memory>
#include <string>

class Animal;

class AnimalFactory {
public:
    // Factory method:
    // - returns Dog if name == "dog"
    // - returns Cat if name == "cat"
    // - returns nullptr otherwise
    static std::unique_ptr<Animal> create(const std::string& name);
};
