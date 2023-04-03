//
// Created by carlo on 1/04/2023.
//
#include "Bovidos.h"

Bovidos::Bovidos(string nombre,string familia, string especie, string habitat,string dieta, int edad, int iD): Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
}

void Bovidos::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if (alimento == "pasto" || alimento == "hierba")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        } else{
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento, este animal ya ha sido alimentado\n";
    }
}

void Bovidos::dormir(int dormir)
{

    if (this->durmiendo == false)
    {
        string tipo;
        cout<<"ingrese si el animal es un joven o un adulto"<<endl;
        cin>>tipo;

        if (tipo == "joven" && dormir < 10)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "joven" && dormir > 12)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "joven" && (dormir >= 10 && dormir <= 12) )
        {
            cout<<"el animal "<<getEspecie()<<" ahora esta durmiendo "<<endl;
            this->durmiendo = true;
        }

        else if(tipo == "adulto" && dormir < 4)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "adulto" && dormir > 6)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "adulto" && (dormir >= 4 && dormir <= 6))
        {
            cout<<"el animal "<<getEspecie()<<"se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }
    } else{
        cout<<"lo siento, el animal ya ha dormido las horas adecuadas "<<endl;
    }
}


void Bovidos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}