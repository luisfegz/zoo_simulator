//
// Created by carlo on 2/04/2023.
//
#include "MoluscosAcua.h"

MoluscosAcua::MoluscosAcua(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
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

void MoluscosAcua::dormir(int dormir)
{
    cout<<"debido a las caracteristicas de la familia de los "<<getFamilia()<<" este animal no tiene patrones de sueño definido "<<endl;
}


void MoluscosAcua::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}