/*
Karol Reyes Sánchez
31- Suma de números introducidos
TDMS 1A 5244

[Instrucciones del problema]
Si en lenguaje C se quiere escribir un programa que:
1º) Pida por teclado un número (dato entero).
2º) Pregunte al usuario si desea introducir otro o no.
3º) Repita los pasos 1º y 2º, mientras que, el usuario no responda "n" de (no).
4º) Muestre por pantalla la suma de los números introducidos por el usuario.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    char seguir;
    int acumulador, numero;

    /* En acumulador se va a guardar la suma de los números
       introducidos por el usuario. */

    acumulador = 0;
    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        acumulador += numero;
        printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
        while(getchar()!='\n');
        scanf( "%c", &seguir );
        

    } while ( seguir != 'n' );

    /* Mientras que el usuario desee introducir más números,
       el bucle repetirá. */

    printf( "\n   La suma de los n%cmeros introducidos es: %d", 163, acumulador );

    getch(); /* Pausa */

    return 0;
}