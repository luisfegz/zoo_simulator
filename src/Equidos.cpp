//
// Created by carlo on 31/03/2023.
//

#include "Equidos.h"

Equidos::Equidos(string nombre, string familia, string especie, string habitat,string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
}

void Equidos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "heno" || alimento == "hierba"|| alimento == "avena")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        }else{
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento, este animal ya ha sido alimentado "<<endl;
    }
}