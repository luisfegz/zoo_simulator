//
// Created by carlo on 31/03/2023.
//

#ifndef ZOO_SIMULATOR_FELINOS_H
#define ZOO_SIMULATOR_FELINOS_H
#include "Animal.h"
#include <vector>
#include <iterator>

class Felinos : public Animal {
private:
    bool alimentacion;

    public:
        Felinos(string nombre, string familia , string especie, string habitat, string dieta, int edad, int iD);
        void comer(string alimento);
        //void dormir(bool durmiendo);
        //void jugar(bool jugando);
};


#endif //ZOO_SIMULATOR_FELINOS_H
