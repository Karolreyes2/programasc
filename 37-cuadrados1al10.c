/*
Karol Reyes Sánchez
37- Cuadrados de los números del 1 al 10
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que muestre por pantalla los cuadrados de los
diez primeros números naturales.
Nota1: cuadrado de un número = número 2
Nota2: utilizar un bucle for.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 1 ; numero <= 10 ; numero++ )/*Mientras que. Especificas cuantas veces quieres que se repita (numero<=10)*/
    {
        printf( "%.f ", pow( numero, 2 ) );/*valor a monstrar que es %.f por un numero real y sea posible la ejecucion al cuadrado*/
    }

    getch(); /* Pausa */

    return 0;
}