/*
Karol Reyes Sánchez
38- Áreas de las circunferencias de radios 1 al 5
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que muestre por pantalla el área de las
circunferencias de radios 1, 2, 3, 4 y 5.
Nota1: área de una circunferencia = Π * radio 2
Nota2: utilizar un bucle for.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int radio, pi=3.1416;

    printf( "\n   " );

    for ( radio = 1 ; radio <= 5 ; radio++ )/*Mientras que. Especificas cuantas veces quieres que se repita (radio<=5)*/
    {
        printf( "%.f ", pi*pow(radio,2) );/*valor a monstrar que es %.f por un numero real y sea posible la ejecucion de la operacion*/
    }

    getch(); /* Pausa */

    return 0;
}