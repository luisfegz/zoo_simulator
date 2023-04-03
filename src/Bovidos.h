//
// Created by carlo on 1/04/2023.
//

#ifndef ZOO_SIMULATOR_BOVIDOS_H
#define ZOO_SIMULATOR_BOVIDOS_H
#include "Animal.h"

class Bovidos : public Animal {
private:
    bool alimentacion;
    bool durmiendo;
    bool juego;


public:
    Bovidos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    void comer(string alimento)override;
    void dormir(int dormir)override;
    void jugar()override;
};


#endif //ZOO_SIMULATOR_BOVIDOS_H
