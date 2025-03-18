/*
Karol Reyes Sánchez
30- Áreas de triángulos
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:

1º) Pida por teclado la base y altura (datos reales) de un triángulo
2º) En el caso de que la base y la altura sean ambas distintas de cero, muestre
por pantalla el mensaje:
"El área del triángulo es: <área>"
3º) Repita los pasos 1º y 2º, mientras que, la base y la altura sean ambas distintas
de cero.
4º) Muestre por pantalla cuántas áreas de triángulos han sido calculadas.
Nota1: área de un triángulo = base * altura / 2
Nota2: utilizar un bucle while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    float base,altura;
    int area;

    printf("\n Ingrese el valor de la base del tri%cngulo (0=fin del programa): ",160);/*pedir los datos al usuario para poder guardarlos para su ejecucion*/
    scanf("%f",&base);
    printf("\n Ingrese el valor de la altura del tri%cngulo (0=fin del programa): ",160);
    scanf("%f",&altura);
    area=0;
    while(base!=0 || altura !=0) /*inicio del programa y declaracion de valores*/
    {
    printf("\n El %crea del tri%cngulo es: %.2f",160,160,base*altura/2);/*concicion donde se realiza la operacion para dar el dato del area*/
    area++;
    printf("\n Ingrese el valor de la base del tri%cngulo (0=fin del programa): ",160);
    scanf("%f",&base);
    printf("\n Ingrese el valor de la altura del tri%cngulo (0=fin del programa): ",160);
    scanf("%f",&altura);
    }
    printf( "\n   Usted ha introducido %d dato(s) diferente(s) de cero.", area);/*condicion si no se cumple while*/
    getch();/*pausa del programa*/
    return 0;/*fin del programa*/
}