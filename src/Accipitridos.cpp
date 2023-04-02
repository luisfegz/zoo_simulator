//
// Created by carlo on 1/04/2023.
//

#include "Accipitridos.h"
#include "Animal.h"

Accipitridos::Accipitridos(string nombre,string familia, string especie, string habitat, string dieta, int edad, int iD): Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
}


void Accipitridos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "carne" || alimento == "insectos")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        } else{
            cout<<"lo siento, el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento el animal ya ha sido alimentado\n"<<endl;
    }
}

