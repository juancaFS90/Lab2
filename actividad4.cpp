/*
Propietario del codigo: Juan Camilo Figueroa Suarez

Este programa crea dinámicamente una matriz 2D de enteros de 2 filas
y 3 columnas utilizando new. Luego solicita al usuario los valores
que serán almacenados en la matriz y finalmente libera la memoria
dinámica utilizada mediante delete[].

*/

#include <iostream>

using namespace std;

int main(){

    //Creamos la variable que va a guardar la matriz
    int **matriz;

    //Reservamos espacio en memoria para dos punteros que seran nuestras filas
    matriz = new int*[2];

    for(int i = 0; i < 2; i++){
        
        //creamos ahora 3 espacios en memoria por cada fila de la matriz
        matriz[i]= new int[3];
    }

    //Asignamos valores a dichos espacios reservados

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++){
            cout << "Ingresa un numero: " << endl;
            cin >> matriz[i][j];
        }

    
    //Presentamos el heap
    cout << "Direccion del arreglo de punteros" << matriz << endl;
    //Presentamos el stack
    cout << "Direccion de la variable matriz: " << &matriz << endl;
    //Presentamos el text/code
    cout << "Direccion del main: " << reinterpret_cast<void*>(&main) << endl;
    //Eliminamos los "arreglos" de cada fila

    for(int i = 0; i < 2; i++){
        delete[] matriz[i];
    }
    
    //Eliminamos las filas
    delete[] matriz;


    
    return 0;
}