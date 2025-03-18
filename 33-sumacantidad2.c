/*
Karol Reyes Sánchez
33- Suma y cantidad de números introducidos (Versión 2)
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato entero).
2º) Muestre por pantalla el mensaje:
"La suma acumulada es: <suma>"
3º) Pregunte al usuario si desea introducir otro número o no.
4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).
5º) Muestre por pantalla cuántos números ha introducido el usuario.
Nota: utilizar un bucle do...while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    char seguir;
    int acumulador, numero,contador; /*declarar las funciones a utilizar*/

    acumulador = 0; /*dar valor a las funciones*/
    contador =0;

    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );/*pedir el dato al usuario*/
        scanf( "%d", &numero );
        contador += numero;/*declarar la accion a realizar (mas e igual que)*/
        printf("\n   La suma acumulada es: %d \n",contador);
        
        printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
        while(getchar()!='\n');/*Limpia el acumulador y permite guardar mas funciones*/
        scanf( "%c", &seguir );
        acumulador++; /*suma al acumulador*/
        
    } while ( seguir != 'n' );

    /* Mientras que el usuario desee introducir más números,
       el bucle repetirá. */

       printf("\n   Los n%cmeros acumulados son: %d",163,acumulador); /*muestra el valor acumulado hasta que el usuario selecciona 'n'*/

    getch(); /* Pausa */

    return 0;
}