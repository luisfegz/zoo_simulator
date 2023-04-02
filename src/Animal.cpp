//
// Created by carlo on 25/03/2023.
//

#include "Animal.h"


Animal::Animal(string nombre, string familia, string especie, string habitat, string dieta, int edad, int id)
        : nombre(nombre),familia(familia), especie(especie), habitat(habitat), dieta(dieta), edad(edad), iD(iD){}

string Animal::getNombre()
{
    return this->nombre;
}

string Animal::getFamilia()
{
    return this->familia;
}

int Animal::getId()
{
    return this->iD;
}

string Animal::getHabitat()
{
    return this->habitat;
}

int Animal::getEdad()
{
    return this->edad;
}

string Animal::getEspecie()
{
    return this->especie;
}

string Animal::getDieta()
{
    return this->dieta;
}