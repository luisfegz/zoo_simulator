//
// Created by carlo on 25/03/2023.
//

#ifndef ZOO_SIMULATOR_ANIMAL_H
#define ZOO_SIMULATOR_ANIMAL_H

#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

class Animal {
private:
    string nombre;
    string especie;
    int iD;
    string habitat;
    int edad;
    string dieta;
    string familia;

public:
    Animal(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD);
    string getNombre();
    string getFamilia();
    string getEspecie();
    int getId();
    string getHabitat();
    int getEdad();
    string getDieta();
    virtual void comer(string alimento) =0;
    //virtual void dormir(bool durmiendo)=0;
    //virtual void jugar(bool jugando)=0;
};

#endif //ZOO_SIMULATOR_ANIMAL_H
