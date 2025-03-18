/*
Karol Reyes Sánchez
27- La mitad de un número
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato real).
2º) En el caso de que el número sea distinto de cero, muestre por pantalla el
mensaje:
"La mitad de <numero> es: <mitad>;.
3º) Repita los pasos 1º y 2º, mientras que, el número sea distinto de cero.
4º) Muestre por pantalla cuántos números distintos de cero han sido introducidos
por el usuario.
Nota: Utilizar un bucle while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x;
    float numero;

    printf( "\n   Ingrese un n%cmero real (0=fin del programa): ", 163 );
    scanf( "%f", &numero );

    x = 0; /* Inicialización del contador */

    while ( numero != 0 )
    {
        printf( "\n   La mitad de %.2f es: %.2f\n", numero, numero / 2 );
        x++; /* Incremento*/
        printf( "\n   Introduzca un n%cmero real (0=fin del programa): ", 163 );/* solocitar de nuevo el dato hasta que sea distinto a cero*/
        scanf( "%f", &numero );
    }

    printf( "\n   Usted ha introducido %d n%cmero(s) diferente de cero.", x, 163 );/*condicion si no se cumple while*/

    getch(); /* Pausa */

    return 0;/*final del programa*/
}