//
// Created by carlo on 1/04/2023.
//
#include "Faisanidos.h"

Faisanidos::Faisanidos(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
}

void Faisanidos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "granos" || alimento == "insectos" || alimento == "carne" || alimento == "semillas" || alimento == "frutas")
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

void Faisanidos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        if (dormir < 8)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para la especie "<<getEspecie()<<endl;
        }

        else if(dormir > 10)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para la especie "<<getEspecie()<<endl;
        }

        else if(dormir >= 8 && dormir <= 10)
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }
    }else{
        cout<<"lo siento, el animal "<<getNombre()<<" ya ha dormido las horas necesarias"<<endl;
    }
}


void Faisanidos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}