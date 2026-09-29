# Lab2
Laboratorio 2 de sistemas operativos

En los siguientes párrafos se dará una explicación de lo que hace cada archivo "actividad#numero"  y el porque funciona.

## Activdad1
Este programa crea una variable de tipo entero y un puntero que almacena su dirección de memoria. Muestra la dirección de memoria de la variable y modifica su valor indirectamente mediante el puntero.  
Esta modificación indirecta es posible porque el puntero apunta a la dirección de memoria de la variable. Al desreferenciar el puntero con el operador *, se puede acceder al valor almacenado en esa dirección y modificarlo.
Nota: "*" significa acceder al valor de dicha dirección a la que esta apuntando el puntero.

## Actividad2
Este programa declara un puntero el cual apunta a una variable,
Con este puntero se modificara el valor de la variable utilizando la des referencia, luego se crea una referencia a la variable, dicha referencia se usa para volver a cambiar el valor de la variable.
La diferencia principal entre el puntero "*" y la referencia "&" es: el puntero almacena como tal una dirección de memoria y requiere ser des referenciado para poder cambiar el valor que se encuentra en la 
dirección a la que apunta mientras que la referencia seria mas como un alias para la variable el cual permite acceder y cambiar el valor de la variable.

## Actividad3

Este código crea un puntero para recorrer un arreglo de números enteros y modificar sus valores a través de dicho puntero. Este proceso se realiza avanzando el puntero una posición cada vez.
Esto es posible porque en C++ los elementos de un arreglo se almacenan de forma contigua en memoria. Por lo tanto, si el puntero apunta al primer elemento del arreglo, se puede utilizar aritmética de punteros para acceder a las siguientes posiciones. Por ejemplo, puntero + 1 permite acceder al siguiente elemento y puntero + 2 al elemento ubicado dos posiciones después.
Es por esto que el ciclo for puede avanzar el puntero una posición en cada iteración.
Nota: No solamente se puede sumar 1 al puntero; también se pueden utilizar otros desplazamientos. Sin embargo, se debe tener cuidado de no intentar acceder fuera de los límites del arreglo, ya que esto produce comportamiento indefinido.

## Actividad4

Este programa crea dinámicamente una matriz 2D de enteros de 2 filas y 3 columnas utilizando new. Luego solicita al usuario los valores que serán almacenados en la matriz y finalmente libera la memoria dinámica utilizada mediante delete[].
La diferencia principal entre esta matriz 2D y el arreglo del punto anterior es que toda la matriz no necesita ocupar un único espacio contiguo en memoria. Cada fila se crea de forma independiente utilizando new, por lo que las filas pueden encontrarse en diferentes posiciones de memoria. Sin embargo, los elementos que pertenecen a una misma fila sí se almacenan de forma contigua.
Gracias al uso de punteros, matriz permite localizar cada una de estas filas y acceder a sus respectivos elementos.


