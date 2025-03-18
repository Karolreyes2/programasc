/*
Karol Reyes Sánchez
35- Primeras diez potencias de 2
TDMS 1A 5244

[Instrucciones del problema]
Si en lenguaje C se quiere escribir un programa que muestre por 
pantalla las primeras diez potencias de 2, desde 2^1 hasta 2^10

*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int i;

    printf( "\n   " );

    for ( i = 0 ; i <= 9 ; i++ ) /*Mientras que. Especificas cuantas veces quieres que se repita (i<=9)*/
    {
        printf( "%.f ", pow( 2, i ) );
    }

    getch(); /* Pausa */

    return 0;
}