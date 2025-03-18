/*
Karol Reyes Sánchez
39- Números pares del 1 al 300
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que muestre por pantalla todos los números
pares que hay entre el 1 y el 300, ambos inclusive.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 2 ; numero <= 300 ; numero += 2 )/*Mientras que. Especificas cuantas veces quieres que se repita (numero<=300) y la accion a realizar (numero mas o igual que 2)*/
    {
        printf( "%d ", numero );/*valor a montrar*/
    }

    getch(); /* Pausa */

    return 0;
}