/*
Karol Reyes Sánchez
32- Suma y cantidad de números introducidos (Versión 1)
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato entero).
2º) Pregunte al usuario si desea introducir otro número o no.
3º) Repita los pasos 1º y 2º, mientras que, el usuario no responda 'n' de (no).
4º) Muestre por pantalla cuántos números han sido introducidos por el usuario, así
como, la suma de todos ellos.
Nota: Utilizar un bucle do...while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    char seguir;
    int acumulador, numero, contador; /*Declarar los valores a utilizar*/
    acumulador = 0; /*Iniciar el contador*/
    contador = 0;
    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        acumulador += numero; /*acumulador mas, igual numero*/
        contador ++; /*Suma al contador*/
        printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
        while(getchar()!='\n'); /*Limpia el acumulador y permite guardar mas funciones*/
        scanf( "%c", &seguir );
        

    } while ( seguir != 'n' );

    /* Mientras que el usuario desee introducir más números,
       el bucle repetirá. */

    printf( "\n   La suma de los n%cmeros introducidos es: %d", 163, acumulador );
    printf("\n   Los n%cmeros introducidos son: %d",163,contador);
    

    getch(); /* Pausa */

    return 0;
}