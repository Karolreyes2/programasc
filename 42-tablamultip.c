/*
Karol Reyes Sánchez
42- Tabla de multiplicar de un número
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que muestre por pantalla la tabla de multiplicar
de un número entero introducido por el usuario. El proceso debe repetirse
mientras que el usuario lo desee.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero, veces;

    printf( "\n   Ingrese el n%cmero de la tabla de multiplicar a mostrar: ",163 );
    scanf("%d",&numero);
    printf("\n   Ingrese el n%cmero donde se detendra el programa: ",163);
    scanf("%d",veces);

    for ( numero = 0 ; numero <= veces ; numero++ )/*Mientras que. Especificas cuantas veces quieres que se repita (numero<=5)*/
    {
        
        printf( " %d  %d ", numero,veces); /*valor a mostrar que es %d (numero y -numero)*/
    }

    getch(); /* Pausa */

    return 0;
}