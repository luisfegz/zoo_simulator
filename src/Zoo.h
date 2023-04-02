//
// Created by carlo on 28/03/2023.
//
#ifndef ZOO_SIMULATOR_ZOO_H
#define ZOO_SIMULATOR_ZOO_H
#include "Animal.h"


class Zoo {

protected:

    vector<Animal*> animales;

public:
    void agregarAnimal(Animal *animal);
    void recorrerAnimales();
    int getCanVec();
    vector<Animal*> getVector();
};
#endif //ZOO_SIMULATOR_ZOO_H
