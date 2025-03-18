/*
Karol Reyes Sánchez
29- Área de un cubo
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado la arista (dato real) de un cubo.
2º) En el caso de que la arista sea menor o igual que 0, muestre por pantalla el
mensaje:
"ERROR: La arista debe ser mayor que cero."
3º) Repita los pasos 1º y 2º, mientras que, la arista introducida sea incorrecta.
4º) Muestre por pantalla:
"El área de un cubo de arista <arista> es: <área>."
Nota1: área de un cubo = 6 * arista 2
Nota2: utilizar un bucle while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    float arista;

    printf("\n Ingrese el valor de la arista de un cubo: ");
    scanf("%f",&arista);
    while(arista <=0) /*inicio del programa*/
    {
    printf("\n Error la arista debe ser mayor a cero \n");/*concicion si la arista es menor a cero*/
    printf("\n\n Ingrese el valor de la arista de un cubo (0=fin del programa): ");/*se piden de nuevo los datos y se pone dos vecesw el salto de linea para ver si no se cumple la comdicion*/
    scanf("%f",&arista);
    }
    printf("\n El %crea del cubo de la arista %.2f es: %.2f",160,arista,6*pow(arista,2));/*operacion a realizar con el nuevo valor ingresado por el servidor*/
    getch();/*pausa del programa*/
    return 0;/*fin del programa*/
}