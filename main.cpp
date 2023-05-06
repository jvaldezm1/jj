#include <iostream>
#include "Archivos.h"


using namespace std;

int main() {
    int opc;

        cout << "\n Menu de opciones " << endl;
        cout << "1. Suma de enteros" << endl;
        cout << "2. Dias de la semana " << endl;
        cout << "3. invertir posiciones " << endl;
        cout << "4. suma de numeros "<<endl;
        cout <<"5. resta de numeros "<<endl;
        cout <<"6. creacion de varios documentos"<<endl;
        cout << "3. salir " << endl;


        cout << "ingrese una opcion " << endl;
        cin >> opc;


        switch (opc) {

            case 1 :
                case1();
                break;

            case 2:
                case2();
                break;


            case 3:
                case3();
                break;

            case 4: case4();
                break;

            case 5 : case5();
                break;

            case 6: case6();
                break;

        }
    return 0;
    }



