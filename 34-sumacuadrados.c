/*
Karol Reyes Sánchez
34- Suma de los cuadrados calculados
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato entero).
2º) Muestre por pantalla el mensaje:
"<número> elevado a 2 es: <cuadrado>"
3º) Pregunte al usuario si desea introducir otro número o no.
4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).
5º) Muestre por pantalla la suma de los cuadrados calculados.
Nota: utilizar un bucle do...while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    char seguir;/*declarar las funciones a utilizar*/
    int acumulador, numero, cuadrado;

    acumulador = 0;/*dar valor a las funciones*/
    cuadrado=0;
    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );/*pedir el dato al usuario*/
        scanf( "%d", &numero );

        acumulador+=pow(numero,2);/*declarar la accion a realizar ( mas e igual que numero elevado al cuadrado)*/
        cuadrado=pow(numero,2);/*declarar que cuadrado es igual a numero elevado a la 2*/

        printf("\n   %d elevado al cuadrado es: %d\n",numero,cuadrado);

        printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
        while(getchar()!='\n');/*Limpia el acumulador y permite guardar mas funciones*/
        scanf( "%c", &seguir );
        

    } while ( seguir != 'n' );

    /* Mientras que el usuario desee introducir más números,
       el bucle repetirá. */

    printf( "\n   La suma de los n%cmeros introducidos elevados a la segunda potencia es: %d", 163, acumulador );

    getch(); /* Pausa */

    return 0;
}