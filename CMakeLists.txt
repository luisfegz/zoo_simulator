cmake_minimum_required(VERSION 3.24)
project(zoo_simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_executable(zoo_simulator src/Animal.h src/Animal.cpp src/Zoo.h src/Zoo.cpp src/Felinos.h src/Felinos.cpp src/Equidos.h src/Equidos.cpp src/Bovidos.h src/Bovidos.cpp src/Faisanidos.h src/Faisanidos.cpp src/Accipitridos.h src/Accipitridos.cpp src/MamiferosAcua.h src/MamiferosAcua.cpp src/MoluscosAcua.h src/MoluscosAcua.cpp src/main.cpp src/Otaridos.h src/Otaridos.cpp)
