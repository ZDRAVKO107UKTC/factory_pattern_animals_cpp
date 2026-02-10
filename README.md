# Factory Pattern (C++) — Animals Demo

A small C++ project demonstrating the **Factory Design Pattern** using an animal example. The project shows how to centralize object creation and decouple client code from concrete implementations.

## Overview

This repository implements:

* **Animal** — abstract base class (interface)
* **Dog** and **Cat** — concrete implementations
* **AnimalFactory** — factory class responsible for object creation
* **main.cpp** — demo program using the factory

The goal is to demonstrate how the Factory pattern improves modularity, extensibility, and maintainability.

## Project Structure

```
factory-pattern-animals-cpp/
├─ README.md
├─ CMakeLists.txt
├─ .gitignore
└─ src/
   ├─ main.cpp
   ├─ Animal.h
   ├─ Dog.h
   ├─ Cat.h
   ├─ AnimalFactory.h
   └─ AnimalFactory.cpp
```

## How It Works

Instead of creating objects directly with:

```cpp
Dog dog;
Cat cat;
```

the client code uses the factory:

```cpp
auto dog = AnimalFactory::create("dog");
auto cat = AnimalFactory::create("cat");
```

The client interacts only with the **Animal interface**, not with concrete classes. The factory decides which implementation to instantiate.

## Features

* Demonstrates the Factory Design Pattern in modern C++
* Uses smart pointers (`std::unique_ptr`)
* Clean separation of interface and implementation
* Simple and extensible architecture

## Requirements

* C++17 compatible compiler
* CMake ≥ 3.16

## Build Instructions

### Linux / macOS

```bash
mkdir build
cd build
cmake ..
cmake --build .
./factory_pattern_animals
```

### Windows (PowerShell)

```powershell
mkdir build
cd build
cmake ..
cmake --build .
.\factory_pattern_animals.exe
```

## Expected Output

```
Dog says: Woof!
Cat says: Meow!
Unknown animal!
```

## Extending the Project

To add a new animal:

1. Create a new class inheriting from `Animal`
2. Implement the `speak()` method
3. Register the class in `AnimalFactory::create()`

Example:

```cpp
if (name == "bird") return std::make_unique<Bird>();
```

## Learning Goals

This project helps understand:

* Factory Design Pattern
* Abstraction and polymorphism
* Loose coupling
* Open/Closed Principle (OCP)
* Centralized object creation

## License

This project is provided for educational purposes.
