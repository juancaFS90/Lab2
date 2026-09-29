/*
Propietario del codigo: Juan Camilo Figueroa Suarez

Este programa declara un puntero el cual apunta a una variable,
Con este puntero se modificara el valor de la variable y se creara un referencia. 

*/

#include <iostream>

using namespace std;

int main(){

    //Declaramos la variable
    int numero = 10;

    //Declaramos el puntero
    int *puntero = &numero;

    //Modificamos el valor de la variable numero
    *puntero = 21;

    //Creamos la refencia a numero y cambiamos el valor

    int &referencia = numero;
    referencia = 25;

    //Imprimimos las direcciones de memoria de puntero y referencia
    cout << "Direccion de memoria de puntero: " << puntero << endl;
    cout << "Direccion de memoria de referencia: " << &referencia << endl;

    return 0;
}
