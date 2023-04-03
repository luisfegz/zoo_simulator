//
// Created by carlo on 2/04/2023.
//
#include "Otaridos.h"

Otaridos::Otaridos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
}

void Otaridos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "crustaceos" || alimento == "pescado")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        }else{
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }

    } else{
        cout<<"lo siento, no puedes alimentar al animal "<<getNombre()<<" con porque este ya ha sido alimentado"<<endl;
    }
}

void Otaridos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        if (dormir < 8)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para la especie "<<getEspecie()<<endl;
        }

        else if(dormir > 12)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para la especie "<<getEspecie()<<endl;
        }

        else if(dormir >= 8 && dormir <= 12)
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }
    }else{
        cout<<"lo siento, este animal ya ha dormido la cantidad de horas necesarias "<<endl;
    }
}


void Otaridos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}