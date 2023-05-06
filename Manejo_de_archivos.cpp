#include <iostream>
#include <conio.h>


using namespace std;


void case1(){
    int numeros[] = {1, 2, 3, 4, 5, 6, 9, 7, 8, 12, 45};

    int suma;
    for (int i = 0; i <= 10; i++) {
        suma = suma + numeros[i];
    }
    cout << "la suma de los elementos del vector es : " << suma << endl;
    getch();
    return;

}

void case2(){
    int dia;
    switch (dia) {
        case 1 :
            printf("\n   Lunes");
            cout << " es dia laboral" << endl;
            break;
        case 2 :
            printf("\n   Martes");
            cout << " es dia laboral" << endl;
            break;
        case 3 :
            printf("\n   Miercoles", 130);
            cout << " es dia laboral" << endl;
            break;
        case 4 :
            printf("\n   Jueves");
            cout << " es dia laboral" << endl;
            break;
        case 5 :
            printf("\n   Viernes");
            cout << "es dia laboral" << endl;
            break;
        case 6 :
            printf("\n   Sabado", 160);
            cout << " es dia laboral" << endl;
            break;
        case 7 :
            printf("\n   Domingo");
            cout << " es dia laboral" << endl;
            break;

    }

}

void case3(){
    int i;
    int numero [i];
    for (i = 0; i < 5; i++) {
        cout << "ingresa los numeros que desea invertir : " << endl;
        cin >> numero[i];
    }
    for (i = 5; i >= 0; i--) {
        cout << "***:" << numero[i] << endl;
    }
    return;
}

void case4(){
    int num1,num2;
    int suma ;

    cout<<"ingrese el primer numero"<<endl;
    cin>>num1;

    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;

    suma=num1+num2;
    cout<<"la suma de "<<num1<<"+"<<num2<<"es:"<<suma<<endl;
    getch();
    return;

}

void case5(){
    int num1,num2;
    int resta;


    cout<<"ingrese un numero "<<endl;
    cin>>num1;

    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;

    resta=num1-num2;
    cout<<"la resta de "<<num1<<"-"<<num2<<"es : "<<resta<<endl;
    getch();
    return;
}