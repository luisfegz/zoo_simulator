cmake_minimum_required(VERSION 3.24)
project(zoo_simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(zoo_simulator
        src/Animal.cpp
        src/Animal.h src/Habitat.h src/Habitat.cpp src/Desert.h src/Desert.cpp src/Zoo.h src/Zoo.cpp src/main.cpp)
