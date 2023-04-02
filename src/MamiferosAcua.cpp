//
// Created by carlo on 2/04/2023.
//

#include "MamiferosAcua.h"



MamiferosAcua::MamiferosAcua(string nombre, string familia, string especie, string habitat, string dieta, int edad, int iD) : Animal(nombre, familia, especie, habitat, dieta, edad, iD)
{
    this->alimentacion = false;
}


void MamiferosAcua::comer(string alimento)
{
    if (this->alimentacion == false)
    {
        if ((alimento == "carne" || alimento == "pescado") && (getNombre() != "dudongo" || getNombre() != "manati"))
        {
            cout<<"el animal "<< getNombre()<<" ha sido alimentado con "<<alimento<<endl;
            this->alimentacion = true;
        }else{
            cout<<"lo siento, el animal que seleccionaste es una mamifero acuatico que se alimenta de algas"<<endl;
        }

    } else{
        cout<<"lo siento, no puedes alimentar al animal"<<getNombre()<<" porque este ya ha sido alimentado"<<endl;
    }
}