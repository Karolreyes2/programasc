/* 
Karol Reyes Sánchez
10-Número par o impar
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado un número (dato entero).
Muestre en pantalla:
"ES PAR", en el caso de que el número sea.
"ES IMPAR", en el caso de que el número no sea.
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int numero;/*Declarar valores o reales a utilizar*/
    
    printf("Ingresa un numero: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%d",&numero);/*guardar valor*/
    if (numero % 2 == 0)/*pedir al programa la operacion a realizar, declarando valores que se requiern para una de las opciones*/
    {printf ("El numero es par");/*mostrar los resultados del problema al usuario*/
        /* code */
    }else{printf ("El numeo es impar");}/*mostrar los resultados del problema al usuario*/
    /*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
    getch();/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
    return 0;
}