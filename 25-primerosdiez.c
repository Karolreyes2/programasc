/* 
Karol Reyes Sánchez
25- Primeros diez números naturales
TDMS 1A 5244

[Instrucciones del problema]
Si en lenguaje C se quiere escribir un programa que muestre por pantalla los
primeros diez números naturales
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int contador;
    printf("\n ");
    contador=1; /*Inicializacion del contador*/
    while (contador<=10)/*Condicion*/
    {
        printf("%d",contador);/*Salida*/
        contador++; /*Incremento del contador*/
    }
    getch(); /*Pausa*/
    return 0;/*Termina el programa*/
}