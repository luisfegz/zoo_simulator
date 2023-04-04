//
// Created by carlo y luis on 1/04/2023.
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
    // Si el animal no ha comido, indica que el animal se encuentra lleno!
    if (this->alimentacion == false)
    {
        // Sino se encuentra alimentado se examina el tipo de alimento
        if (alimento == "pasto" || alimento == "hierba")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
            // El animal se encuentra Lleno!
        } else{
            // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento, este animal ya ha sido alimentado\n";
    }
}

//La funcion permite evaluar el estado de recuperacion y horas de sueño del tipo de familia de animal de Zoo
void Bovidos::dormir(int dormir)
{
    if (this->durmiendo == false)
    {
        // Verifica el estado de madurez del animal por medio del tipo
        string tipo;
        cout<<"ingrese si el animal es un joven o un adulto"<<endl;
        cin>>tipo;

        // Verifica si son horas de descanso insuficiente para el animal
        if (tipo == "joven" && dormir < 10)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso excesivas para el animal
        else if(tipo == "joven" && dormir > 12)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para el/la"<<tipo<<" "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso son adecuadas para el animal
        else if(tipo == "joven" && (dormir >= 10 && dormir <= 12) )
        {
            cout<<"el animal "<<getEspecie()<<" ahora esta durmiendo "<<endl;
            this->durmiendo = true;
        }

        // PARENTESIS
        // Lo mismo se evalua con distintos tipos de madurez del animal persé.
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
    // Verifica si el animal ha jugado
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        // El animal ha jugado
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}