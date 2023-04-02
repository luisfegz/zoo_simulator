//
// Created by carlo on 28/03/2023.
//

#include "Zoo.h"

void Zoo ::agregarAnimal(Animal *animal)
{
    if (animal->getHabitat() == "desertico" || animal->getHabitat() == "selvatico" || animal->getHabitat() == "polar" || animal->getHabitat() == "acuatico")
    {
        animales.push_back(animal);

    } else{
            cout<<"lo siento, pero el zoologico no cuenta con el tipo de habitat requerido por el animal "<<endl;
            }
}

void Zoo::recorrerAnimales()
{
    vector<Animal*>::iterator itvector;
    for (itvector = this->animales.begin(); itvector != this->animales.end(); ++itvector)  {
        Animal *pAnimalTemp = *itvector;
        cout<<"el nombre del animal es "<<pAnimalTemp->getNombre()<<endl;
        cout<<"la especie es "<<pAnimalTemp->getEspecie()<< endl;
        cout<<"el habitat es "<<pAnimalTemp->getHabitat()<<endl;
        cout<<"la edad del animal es "<<pAnimalTemp->getEdad()<<endl;
        cout<<"el ID del animal es "<<pAnimalTemp->getId()<<"\n"<<endl;
    }
}
int Zoo::getCanVec()
{
    return animales.size();
}

vector<Animal*> Zoo::getVector()
{
    return this->animales;
}