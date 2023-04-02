//
// Created by carlo on 2/04/2023.
//

#ifndef ZOO_SIMULATOR_MAMIFEROSACUA_H
#define ZOO_SIMULATOR_MAMIFEROSACUA_H


#include "Animal.h"

class MamiferosAcua : public Animal {
private:
    bool alimentacion;


public:
    MamiferosAcua(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    void comer(string alimento);
};


#endif //ZOO_SIMULATOR_MAMIFEROSACUA_H
