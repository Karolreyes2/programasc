/*
Karol Reyes Sánchez
43- Suma de números pares e impares
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato entero).
2º) Repita el paso 1º, mientras que, el número introducido sea distinto de cero.
3º) Muestre por pantalla la suma de los números pares e impares introducidos por
el usuario.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero, pares, impares;/*declaracion de las variables*/

    printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );/*pedir al usuario que introduzca el numero y marcar que el fin es = a cero*/
    scanf( "%d", &numero );/*dato guardado*/

    pares = 0;
    impares = 0; /*declarar valores de las variables*/

    while ( numero != 0 ) /*donde numero es diferente o igual a cero*/
    {
        if ( numero % 2 == 0 ) /*declarar que el numero tiene que ser primo*/
            pares += numero;
        else /*para cumplir con la otra funcion*/
            impares += numero;

        printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
        scanf( "%d", &numero );
    }

    printf( "\n   La suma de los pares es: %d", pares ); /*el usuario declaro cero y dio fin al programa para poder ejecutar las siguientes fuciones*/
    printf( "\n\n   La suma de los impares es: %d", impares );

    getch(); /* Pausa */

    return 0;
}