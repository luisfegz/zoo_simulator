//
// Created by carlo on 31/03/2023.
//
#include "Felinos.h"

Felinos::Felinos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
        this->alimentacion = false;
        this->durmiendo = false;
        this->juego = false;
}

void Felinos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "carne" || alimento == "pescado")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        }else{
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }

    } else{
        cout<<"lo siento, no puedes alimentar al animal "<<getNombre()<<" porque este ya ha sido alimentado"<<endl;
    }
}

void Felinos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        if(dormir < 12)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para el animal "<<getEspecie()<<endl;
        }

        else if(dormir > 16)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para el animal "<<getEspecie()<<endl;
        }

        else if(dormir >= 12 && dormir <= 16)
        {
            cout<<"el animal "<<getEspecie()<<" se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }
    } else{
        cout<<"lo siento el animal ya ha dormido las horas de sueño necesarias "<<endl;
    }
}


void Felinos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}