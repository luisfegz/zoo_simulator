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

//La funcion permite evaluar el estado de alimentacion y dieta del tipo de familia de animal de Zoo
void Accipitridos::comer(string alimento)
{   // Si el animal no ha comido, indica que el animal se encuentra lleno!
    if (this->alimentacion == false)
    {
        // Sino se encuentra alimentado se examina el tipo de alimento
        if (alimento == "carne" || alimento == "insectos")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
            // El animal se encuentra Lleno!
        } else{
            // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
            cout<<"lo siento, el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento el animal ya ha sido alimentado\n"<<endl;
    }
}

//La funcion permite evaluar el estado de recuperacion y horas de sueño del tipo de familia de animal de Zoo
void Accipitridos::dormir(int dormir)
{
    // Evalua si el animal no ha dormido
    if (this->durmiendo == false)
    {
        // Verifica si son horas de descanso insuficiente para el animal
        if(dormir < 6)
        {
            cout<<"lo siento, la cantidad de horas que ingresaste son insuficientes para un adecuado descanso del animal "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso excesivas para el animal
        else if (dormir > 8)
        {
            cout<<"lo siento, la cantidad de horas que ingresaste es excesiva para el animal "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso son adecuadas para el animal
        else if((dormir >= 6) && (dormir <= 8))
        {
            cout<<"el animal "<<getNombre()<<" ahora esta durmiendo "<<endl;
            this->durmiendo = true;
            // El animal esta descansado
        }
    } else{
        // El animal ya ha descansado
        cout<<"lo siento pero este animal ya ha dormido lo necesario "<<endl;
    }
}

void Accipitridos::jugar()
{
    // Verifica si el animal ha jugado
    if (this->juego == false)
    {
        cout<<getNombre()<<" de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        // El animal ha jugado
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}