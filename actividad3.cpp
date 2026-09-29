/*
Propietario del codigo: Juan Camilo Figueroa Suarez

Este codigo crea un puntero para un arreglo de numero enteros,
modificando los valores de dicho arreglo atraves del puntero

*/

#include <iostream>

using namespace std;

int main(){

    //Declaramos el arreglo y el puntero apuntando al primer elemento
    int arreglo[5] = {1,2,3,4,5};
    int *puntero = &arreglo[0];

    //Cambiamos los valores del arreglo con el puntero
    
    for(int i = 0; i < 5; i++){

        cout << "Direccion del puntero: " << puntero << endl;
        cout << "Direccion del arreglo: " << &arreglo << endl;
        cout << "Posicion del puntero en el arreglo: " << i << endl;
        cout << "==================================" << endl;
        //Cambiamos el valor de la poscion i del arreglo con el puntero
        *puntero = 10*i;
        //Movemos el puntero a la siguiente posicion del arreglo
        puntero = puntero+1;
    }

    

    //Verificamos el cambio
    for(int i = 0; i < 5;i++){
        cout << "Valor cambiado: " << arreglo[i] << endl;
    }

    return 0;

}
