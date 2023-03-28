#include "Animal.h"


#include <iostream>

using namespace std;

int main() {
    int opc;

    do {
        cout << "----- MENU -----" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opc;

        switch(opc) {
            case 1:
                cout << "Usted eligio la opcion 1" << endl;
                break;
            case 2:
                cout << "Usted eligio la opcion 2" << endl;
                break;
            case 3:
                cout << "Usted eligio la opcion 3" << endl;
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
        }
    } while (opc != 4);

    return 0;
}