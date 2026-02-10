cmake_minimum_required(VERSION 3.16)
project(factory_pattern_animals LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(factory_pattern_animals
        main.cpp
        AnimalFactory.cpp
        Animal.h
        Dog.h
        Cat.h
        AnimalFactory.h
        main.cpp
)
