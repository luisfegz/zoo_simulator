#include "Animal.h"
#include "Accipitridos.h"
#include "Felinos.h"
#include "Equidos.h"
#include "Bovidos.h"
#include "Faisanidos.h"
#include "MamiferosAcua.h"
#include "MoluscosAcua.h"
#include "Otaridos.h"
#include "Zoo.h"

//Prototipos de las funciones implentadas durante la ejecucion del programa
void recorrerAnimales(Zoo *zoologico);
void agregarAnimal(Zoo *zoologico);
void menu(Zoo *zoologico);
void opcionesAnimales(Zoo *zoologico);
void buscarIdAnimal(Zoo *zoo ,vector<Animal*> animales, int id);
void accionARealizar(Zoo *zoologico, Animal *animal, string accion);
void accionComer(Zoo *zoologico, Animal *animal);
void accionDormir(Zoo *zoologico, Animal *animal);


//Funcion principal que arranca el programa
int main() {
    Zoo *zoologico = new Zoo();
    menu(zoologico);
    return 0;
}

//Funcion que se encarga de mostrar el menu de opciones del programa
void menu(Zoo *zoologico)
{
    int opc;
    do {
        cout << "---------------------------------- MENU -----------------------------------" << endl;
        cout << "Opcion 1:\nAgregar un animal al zoologico \n" << endl;
        cout << "Opcion 2:\nVer animales agregados al zoologico con su respectiva informacion\n" << endl;
        cout << "Opcion 3:\nVer acciones especiales de los animales\n" << endl;
        cout << "Opcion 4: Salir" << endl;
        cout << "---------------------------------------------------------------------------\n"<<endl;
        cout << "Ingrese una opcion: \n";

        cin >> opc;

        switch(opc) {

            case 1:
                cout <<"--------------------------------------------- AGREGAR ANIMAL ---------------------------------------------"<<endl;
                cout <<"para esto debes tener en cuenta la familia del animal que vas agregar"<<endl;
                cout << "Bovidos: si se trata de un animal cuadrapedo que se asemeja a una vaca como un Bisonte, Cabra, Antilope\n "<<endl;
                cout << "Equidos: si se trata de un animal que se asemeja a un caballo como una Cebra, Onagro, kiang \n"<<endl;
                cout << "Faisanidos: si se trata de un ave de esta familia como los faisanes comun, dorado, plateado, de monte \n"<<endl;
                cout << "Felinos: si se trata de un animal que se asemeje a un Leon, Tigre, Leopardo\n"<<endl;
                cout << "Accipitridos: si se trata de aves como las Aguilas, Halcones o Gavilan\n"<<endl;
                cout << "Mamiferos Acuaticos: si se trata de animales que alimentan a sus crias con leche como delfines o ballenas\n"<<endl;
                cout << "MoluscosAcua: si se trata de animales sin estructura osea como pulpos, calamares o caracoles \n"<<endl;
                cout << "Otaridos: si se trata de morsas, focas \n"<<endl;
                cout << "------------------------------------------------------------------------------------------------------------"<<endl;
                agregarAnimal(zoologico);
                break;

            case 2:
                cout <<"---------------------- ANIMALES AGREGADOS ----------------------"<<endl;
                recorrerAnimales(zoologico);
                break;
            case 3:
                cout <<"------------------- OPCIONES ESPECIALES ------------------"<<endl;
                opcionesAnimales(zoologico);
                break;
            case 4:
                cout << "------------------- SALIENDO DEL PROGRAMA -------------------" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
        }
    } while (opc != 4);
}

void agregarAnimal(Zoo *zoologico)
{
    string nombre,especie,habitat,dieta, familia;
    int edad,identificacion;
    identificacion = zoologico->getCanVec();
    cout <<"----------------------------------------------------- DATOS ANIMAL ---------------------------------------------------"<<endl;
    cout<<"El zoologico solo puede agregar animales cuyo habitat sea desertico, polar, selvatico u acuatico"<<endl;
    cout<<"Ingrese la familia del animal:\nAccipitridos\nBovidos\nEquidos\nFaisanidos\nFelinos\nMamiferos Acuaticos(MamiferosA)\nMoluscos Acuaticos(MoluscosA)\nOtaridos "<<endl;
    cin>>familia;

    cout<<"ingrese el nombre del animal"<<endl;
    cin>>nombre;

    cout<<"ingrese la especie del animal"<<endl;
    cin>>especie;

    cout<<"ingrese el habitat del animal"<<endl;
    cin>>habitat;

    cout<<"ingrese la edad del animal"<<endl;
    cin>>edad;

    cout<<"ingrese la dieta del animal"<<endl;
    cin>>dieta;

    if (familia == "Bovidos")
    {
        Bovidos *Pbovido = new Bovidos(nombre, familia, especie, habitat, dieta, edad, identificacion);
        zoologico->agregarAnimal(Pbovido);
    }
    else if(familia == "Equidos")
    {
        Equidos *pEquido = new Equidos(nombre,familia, especie, habitat, dieta, edad, identificacion);
        zoologico->agregarAnimal(pEquido);
    }
    else if(familia == "Faisanidos")
    {
        Faisanidos *pFaisanido = new Faisanidos(nombre, familia, especie, habitat, dieta, edad, identificacion);
        zoologico->agregarAnimal(pFaisanido);
    }
    else if(familia == "Felinos")
    {
        Felinos *pFelino = new Felinos (nombre, familia, especie, habitat, dieta, edad, identificacion);
        zoologico->agregarAnimal(pFelino);
    }
    else if (familia == "Accipitridos")
    {
        Accipitridos *pAccipritido = new Accipitridos(nombre, familia, especie, habitat, dieta , edad, identificacion);
        zoologico->agregarAnimal(pAccipritido);
    }

    else if (familia == "MamiferosA")
    {
        MamiferosAcua *pMamiferoA = new MamiferosAcua(nombre, familia, especie, habitat, dieta , edad, identificacion);
        zoologico->agregarAnimal(pMamiferoA);
    }

    else if (familia == "MoluscosA")
    {
        MoluscosAcua *pMolusco = new MoluscosAcua(nombre, familia, especie, habitat, dieta , edad, identificacion);
        zoologico->agregarAnimal(pMolusco);
    }

    else if (familia == "Otaridos")
    {
        Otaridos *pOtarido = new Otaridos(nombre, familia, especie, habitat, dieta , edad, identificacion);
        zoologico->agregarAnimal(pOtarido);
    }

}


void recorrerAnimales(Zoo *zoologico)
{
    zoologico->recorrerAnimales();

}

void opcionesAnimales(Zoo *zoologico)
{
    cout<<" ------------------------ LISTA ANIMALES --------------------------\n"<<endl;
    int posicion;
    string opciones;
    int i = 0;
    vector<Animal*>::iterator itvector;
    vector<Animal*> animales = zoologico->getVector();
    cout<<"los animales para realizar acciones son;"<<"\n"<<endl;
    zoologico->recorrerAnimales();

    cout<<"----------------------- SELECCIONAR ANIMAL -----------------------"<<endl;
    cout<<"ingresa el id del animal que has escogido para realizar acciones"<<endl;
    cin>>posicion;
    buscarIdAnimal(zoologico,animales, posicion);

}

void buscarIdAnimal(Zoo *zoo,vector<Animal*> animales, int id)
{
    string accionR;
    vector<Animal*>::iterator itvector;
    Animal *pAnimal;
    for (itvector = animales.begin(); itvector != animales.end(); ++itvector)  {
        Animal *pAnimalTemp = *itvector;
        if (pAnimalTemp->getId() == id)
        {
            pAnimal = pAnimalTemp;
        }
    }
    cout<<"---------------------- ACCION A REALIZAR --------------------"<<endl;
    cout<<"escribe la accion que deseas realizar: comer, jugar, dormir"<<endl;
    cin>>accionR;
    accionARealizar(zoo,pAnimal,accionR);


}
void accionDormir(Zoo *zoologico, Animal *animal)
{
    int hsuenio;
    cout<<"ten en cuanta la familia del animal para ingresar las horas que quieres que duerma\n"<<endl;
    cout<<"los Accipitridos duermen entre 6 y 8 horas  \n"<<endl;
    cout<<"los Bovidos jovenes duermen entre 10 y 12 horas y los adultos entre 4 y 6 \n"<<endl;
    cout<<"los Equidos jovenes duermen entre 2 y 14 horas y los adultos entre 2 y 4 \n"<<endl;
    cout<<"los Faisanidos duermen entre 8 y 10 horas \n"<<endl;
    cout<<"los Felinos duermen entre 12 y 16 horas \n"<<endl;
    cout<<"los Mamiferos Acuaticos duermen entre 10 y 12 horas  \n"<<endl;
    cout<<"los Moluscos acuaticos no duermen ya que no tienen patrones de suenio definidos \n"<<endl;
    cout<<"los Otaridos duermen entre 8 y 12 horas\n"<<endl;
    cout<<"la familia del animal que escogiste es "<<animal->getFamilia()<<endl;
    cout<<"ingrese la cantidad de horas de suenio que desea que duerma \n"<<endl;
    cin>>hsuenio;
    animal->dormir(hsuenio);
}

void accionComer(Zoo *zoologico, Animal *animal)
{
    string comida;
    cout<<"---------------------------------- INGRESAR COMIDA -----------------------------"<<endl;
    cout<<"ten en cuenta la familia del animal para ingresar el alimento que deseas darle\n"<<endl;
    cout<<"los Accipitridos son carnivoros y se pueden alimentar de carne o insectos\n"<<endl;
    cout<<"los Bovidos son herbivoros y se alimentan de pasto u hierba\n"<<endl;
    cout<<"los Equidos son herbivoros y se alimentan de hierba, heno u avena\n"<<endl;
    cout<<"los Faisanidos son omnivoros y se pueden alimentar de granos, insectos, carne, semillas y frutas\n"<<endl;
    cout<<"los Felinos son carnivoros y se pueden alimentar de carne o pescado\n"<<endl;
    cout<<"los Mamiferos acuaticos son principalmente carnivoros y se pueden alimentar de carne y peces excepto si es un Dudongo o Manati\n"<<endl;
    cout<<"los Moluscos acuaticos son omnivoros y se pueden alimentar de fitoplancton, animalitos y materia organica\n"<<endl;
    cout<<"los Otaridos son carnivoros y se pueden alimentar de crustaceos o pescado \n"<<endl;
    cout<<"la familia del animal que escogiste es "<<animal->getFamilia()<<endl;
    cout<<"ingrese el alimento que desea darle al animal "<<endl;
    cin>>comida;
    animal->comer(comida);
}


void accionARealizar(Zoo *zoologico, Animal *animal, string accion)
{
    cout<<"el animal escogido es "<<animal->getEspecie()<< " y su dieta es "<<animal->getDieta()<<endl;
    cout<<"la opcion que escogiste fue "<<accion<<endl;

    if(accion == "comer")
    {
        accionComer(zoologico, animal);
    }

    if(accion == "dormir")
    {
        accionDormir(zoologico, animal);
    }

    if (accion == "jugar")
    {
        animal->jugar();
    }
}