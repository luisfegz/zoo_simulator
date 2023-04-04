//
// Created by carlo y Luis on 2/04/2023.
//
#include "MamiferosAcua.h"

MamiferosAcua::MamiferosAcua(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
    this->durmiendo = false;
    this->juego = false;
}

void MamiferosAcua::comer(string alimento)
{
    // Si el animal no ha comido, indica que el animal se encuentra lleno!
    if (this->alimentacion == false)
    {
        // Sino se encuentra alimentado se examina el tipo de alimento
        if ((alimento == "carne" || alimento == "pescado") && (getNombre() != "dudongo" || getNombre() != "manati"))
        {
            cout<<"el animal "<< getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
            // El animal se encuentra Lleno!
        }else{
            // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
            cout<<"lo siento, el animal que seleccionaste es una mamifero acuatico que se alimenta de algas"<<endl;
        }

    } else{
        // Si el alimento no es el adecuado, saldra un mensaje que indicara que no puede ser alimentado por x alimento
        cout<<"lo siento, no puedes alimentar al animal"<<getNombre()<<" porque este ya ha sido alimentado"<<endl;
    }
}

//La funcion permite evaluar el estado de recuperacion y horas de sueño del tipo de familia de animal de Zoo
void MamiferosAcua::dormir(int dormir)
{
    // Evalua si el animal no ha dormido
    if (this->durmiendo == false)
    {
        // Verifica si son horas de descanso insuficiente para el animal
        if (dormir < 10)
        {
            cout<<"lo siento la cantidad de horas son insuficientes para el animal "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso excesivas para el animal
        else if(dormir > 12)
        {
            cout<<"lo siento, la cantidad de horas son excesivas para el animal "<<getEspecie()<<endl;
        }

        // Verifica si son horas de descanso son adecuadas para el animal
        else if(dormir >= 10 && dormir <= 12)
        {
            cout<<"el animal se encuentra durmiendo "<<endl;
            this->durmiendo=true;
        }

    } else{
        cout<<"lo siento, el animal ya ha dormido la cantidad de horas requeridas "<<endl;
    }
}


void MamiferosAcua::jugar()
{
    if (this->juego == false)
    {
        cout<<getNombre()<<" , de la especie "<<getEspecie()<<" esta jugando"<<endl;
    } else
    {
        cout<<"lo siento, pero "<<getNombre()<<" de la especie "<<getEspecie()<<" ya jugo el dia de hoy"<<endl;
    }
}