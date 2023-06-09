//
// Created by carlo on 31/03/2023.
//

#ifndef ZOO_SIMULATOR_EQUIDOS_H
#define ZOO_SIMULATOR_EQUIDOS_H
#include "Animal.h"

class Equidos : public Animal {
private:
    bool alimentacion;
    bool durmiendo;
    bool juego;


public:
    Equidos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    void comer(string alimento)override;
    void dormir(int dormir)override;
    void jugar()override;
};


#endif //ZOO_SIMULATOR_EQUIDOS_H
