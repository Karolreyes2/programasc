/*
Karol Reyes Sánchez
UA3-examen
TDMS 1A 5244

Escribir en lenguaje C un programa que:
1º) Pida por teclado dos números (datos enteros).
2º) En el caso de que alguno de ellos sea menor o igual que cero, muestre por pantalla el mensaje:
"ERROR: Ambos números deben ser mayores que cero.".
En caso contrario, muestre por pantalla el resultado de realizar la división entera del primer número introducido por el usuario entre el segundo, y el resto.

Nota: No se puede utilizar el operador división (/) ni el operador módulo (%).
Programa: División entera con restas sucesivas */ 

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main() {
    int x, y;
    int residuo = 0, resultado;

    printf("\n  Introduzca el primer n%cmero: ",163);
    scanf("%d", &x);
    printf("\n  Introduzca el segundo n%cmero: ",163);
    scanf("%d", &y);

    if (x <= 0 || y <= 0) { /*comando para verificar que es mayor a cero*/
        printf("\n  ERROR, los n%cmeros: %d, %d, deben ser mayores a cero\n",163,x,y); /*muestra error si no cumple con la condicion*/
        return 0;
    }

    resultado = x;/*resultado es igual al primer numero*/
    while (resultado >= y ) { /*mientras que resta sea mayor o igual que x*/
        resultado -= y;
        residuo++; /*residuo mas uno*/
    }

    printf("\n  El resultado de la divisi%cn es: %d \n",162,residuo); /*mostrar el resultado de la division*/
    printf("\n  El residuo de la divisi%cn es: %d \n",162,resultado);
    getch(); /*pausar el programa*/

    return 0;
} 

/*resultado -= y;/*resultado menor o igual a y*/