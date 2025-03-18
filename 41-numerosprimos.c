/*
Karol Reyes Sánchez
41- Números primos entre el número 1 y el 20
TDMS 1A 5244

[Instrucciones del problema]
Si en lenguaje C se quiere escribir un programa que muestre por pantalla todos los
números enteros del 1 al 20 (ambos inclusive) que sean primos.
Nota: Un número primo es aquél que sólo es divisible por sí mismo y por 1.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero, primo, contador;

    printf( "\n   " );

    for ( numero = 1 ; numero <= 20 ; numero ++ )/*Mientras que. Especificas cuantas veces quieres que se repita (numero<=300) y la accion a realizar (numero mas o igual que 2)*/
    {
        primo=1;
        contador=2;
        while (contador <= numero /2 && primo)
        {
            if (numero % contador == 0)
            primo =0;
            contador++;
        }
        if (primo)
        {
            printf( "%d ", numero );/*valor a montrar*/
        }
        
        
    }

    getch(); /* Pausa */

    return 0;
}