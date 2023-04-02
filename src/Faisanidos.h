//
// Created by carlo on 1/04/2023.
//

#ifndef ZOO_SIMULATOR_FAISANIDOS_H
#define ZOO_SIMULATOR_FAISANIDOS_H
#include "Animal.h"


class Faisanidos : public Animal{
private:
    bool alimentacion;


public:
    Faisanidos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    void comer(string alimento);

};


#endif //ZOO_SIMULATOR_FAISANIDOS_H
