//
// Created by carlo on 31/03/2023.
//
#include "Equidos.h"

Equidos::Equidos(string nombre, string familia, string especie, string habitat,string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
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

void Equidos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        string tipo;
        cout<<"ingresa si el animal es joven o adulto "<<endl;
        cin>>tipo;
        if (tipo == "joven" && dormir < 2)
        {
            cout<<"lo siento la cantidad de horas es inferior a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "joven" && dormir > 14)
        {
            cout<<"lo siento la cantidad de horas es excesiva a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "joven" && (dormir >= 2 && dormir <= 14))
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }

        else if(tipo == "adulto" && dormir < 2)
        {
            cout<<"lo siento, la cantidad de horas es inferior a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "adulto" && dormir > 4)
        {
            cout<<"lo siento, la cantidad de horas es excesiva a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        else if(tipo == "adulto" && (dormir >= 2 && dormir <= 4))
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
        }
    } else{
        cout<<"lo siento, el animal ya ha dormido la cantidad de horas requeridas"<<endl;
    }
}


void Equidos::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}