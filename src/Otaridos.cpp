//
// Created by carlo y luis on 2/04/2023.
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
    // Si el animal no ha comido, indica que el animal se encuentra lleno!
    if (this->alimentacion == false)
    {
        // Sino se encuentra alimentado se examina el tipo de alimento
        if (alimento == "crustaceos" || alimento == "pescado")
        {
            cout<<"el animal "<<getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
            // El animal se encuentra Lleno!
        }else{
            // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
            cout<<"lo siento el animal no puede ser alimentado con "<<alimento<<endl;
        }

    } else{
        // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
        cout<<"lo siento, no puedes alimentar al animal "<<getNombre()<<" con "<<alimento<<" porque este ya ha sido alimentado"<<endl;
    }
}
//La funcion permite evaluar el estado de recuperacion y horas de sueño del tipo de familia de animal de Zoo
void Otaridos::dormir(int dormir)
{
    // Evalua si el animal no ha dormido
    if (this->durmiendo == false)
    {
        // Verifica si son horas de descanso insuficiente para el animal
        if (dormir < 8)
        {
            cout<<"lo siento, la cantidad de horas son insuficientes para la especie "<<getEspecie()<<endl;
        }
        // Verifica si son horas de descanso excesivas para el animal
        else if(dormir > 12)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para la especie "<<getEspecie()<<endl;
        }

        else if(dormir >= 8 && dormir <= 12)
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo = true;
            // El animal esta descansado
        }
    }else{
        cout<<"lo siento, este animal ya ha dormido la cantidad de horas necesarias "<<endl;
    }
}


void Otaridos::jugar()
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