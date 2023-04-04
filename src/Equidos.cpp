//
// Created by carlo y Luis on 31/03/2023.
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
    // Si el animal no ha comido, indica que el animal se encuentra lleno!
    if (this->alimentacion == false)
    {
        // Sino se encuentra alimentado se examina el tipo de alimento
        if (alimento == "heno" || alimento == "hierba"|| alimento == "avena")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
            // El animal se encuentra Lleno!
        }else{
            // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }
    } else{
        cout<<"lo siento, este animal ya ha sido alimentado "<<endl;
    }
}

//La funcion permite evaluar el estado de recuperacion y horas de sueño del tipo de familia de animal de Zoo
void Equidos::dormir(int dormir)
{
    // Evalua si el animal no ha dormido
    if (this->durmiendo == false)
    {
        string tipo;
        cout<<"ingresa si el animal es joven o adulto "<<endl;
        cin>>tipo;

        // Verifica si son horas de descanso insuficiente para el animal
        if (tipo == "joven" && dormir < 2)
        {
            cout<<"lo siento la cantidad de horas es inferior a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso excesivas para el animal
        else if(tipo == "joven" && dormir > 14)
        {
            cout<<"lo siento la cantidad de horas es excesiva a la requerida por el/la "<<tipo<<" "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso son adecuadas para el animal
        else if(tipo == "joven" && (dormir >= 2 && dormir <= 14))
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
            // El animal esta descansado
        }
        // PARENTESIS
        // Lo mismo se evalua con distintos tipos de madurez del animal persé.

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