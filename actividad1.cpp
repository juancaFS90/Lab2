/*
Propietario del codigo: Juan Camilo Figueroa Suarez

Este programa crea una variable de tipo entero y un puntero que almacena
su direccion de memoria. Muestra la direccion de memoria de la variable,
modifica su valor indirectamente mediante el puntero y finalmente muestra
el nuevo valor de la variable y su direccion de memoria.

*/


#include <iostream>

using namespace std;


int main(){

    //Declaramos y asignamos un valor a la variable
    int variable = 10;
    int *direccion = &variable;

    cout << "La direccion en memoria de variable es: " << direccion << endl;

    //Modificamos el valor de la variable indirectamente usando el puntero
    *direccion = 15;

    //Imprimimos el nuevo valor y su direccion en memoria

    cout << "Valor de variable cambiado: " << variable << endl;
    cout << "Direccion en memoria de variable: " << direccion << endl;



    return 0;
}
