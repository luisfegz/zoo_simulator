//
// Created by carlo on 2/04/2023.
//

#include "MoluscosAcua.h"


MoluscosAcua::MoluscosAcua(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
}


void MoluscosAcua::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "fitoplancton" || alimento == "animalitos"||alimento == "materia organica")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        }else{
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }

    } else{
        cout<<"lo siento, no puedes alimentar al animal"<<getNombre()<<"con carne porque este ya ha sido alimentado"<<endl;
    }
}