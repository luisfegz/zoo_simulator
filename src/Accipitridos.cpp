//
// Created by carlo on 1/04/2023.
//
#include "Accipitridos.h"

Accipitridos::Accipitridos(string nombre,string familia, string especie, string habitat, string dieta, int edad, int iD): Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
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

void Accipitridos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        if(dormir < 6)
        {
            cout<<"lo siento, la cantidad de horas que ingresaste son insuficientes para un adecuado descanso del animal "<<getEspecie()<<endl;
        }

        else if (dormir > 8)
        {
            cout<<"lo siento, la cantidad de horas que ingresaste es excesiva para el animal "<<getEspecie()<<endl;
        }

        else if((dormir >= 6) && (dormir <= 8))
        {
            cout<<"el animal "<<getNombre()<<" ahora esta durmiendo "<<endl;
            this->durmiendo = true;
        }
    } else{
        cout<<"lo siento pero este animal ya ha dormido lo necesario "<<endl;
    }
}

void Accipitridos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}