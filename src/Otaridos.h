//
// Created by carlo on 2/04/2023.
//

#ifndef ZOO_SIMULATOR_OTARIDOS_H
#define ZOO_SIMULATOR_OTARIDOS_H
#include "Animal.h"

class Otaridos : public Animal{
private:
    bool alimentacion;
    bool durmiendo;
    bool juego;


public:
    Otaridos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    void comer(string alimento)override;
    void dormir(int dormir)override;
    void jugar()override;

};


#endif //ZOO_SIMULATOR_OTARIDOS_H
