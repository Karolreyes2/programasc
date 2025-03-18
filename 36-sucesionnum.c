/*
Karol Reyes Sánchez
36- Sucesión de números positivos y negativos
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que muestre por pantalla la sucesión de
números: 1 -1 2 -2 3 -3 4 -4 5 -5
Nota: Utilizar un bucle for.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 0 ; numero <= 5 ; numero++ )/*Mientras que. Especificas cuantas veces quieres que se repita (numero<=5)*/
    {
        printf( "  %d   %d  ", numero, -numero ); /*valor a mostrar que es %d (numero y -numero)*/
    }

    getch(); /* Pausa */

    return 0;
}