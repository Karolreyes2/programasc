/*
Karol Reyes Sánchez
28- Área de una circunferencia de radio válido
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado el radio (dato real) de una circunferencia.
2º) En el caso de que el radio sea menor o igual que 0, muestre por pantalla el
mensaje "ERROR: El radio debe ser mayor que cero".
3º) Repita los pasos 1º y 2º, mientras que, el radio introducido sea incorrecto.
4º) Muestre por pantalla:
"El área de una circunferencia es: "
Nota1: área de una circunferencia = Π * radio 2
Nota2: utilizar un bucle while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    float radio, pi=3.1416;

    printf("\n Ingrese el valor del radio de una circunferencia: ");
    scanf("%f",&radio);
    while(radio <=0) /*inicio del programa*/
    {
    printf("\n Error el radio debe ser mayor a cero \n");/*concicion si el radio es menor a cero*/
    printf("\n\n Ingrese el valor del radio de una circunferecia (0=fin del programa): ");/*se piden de nuevo los datos*/
    scanf("%f",&radio);
    }
    printf("\n El %crea de la circunferencia es: %.2f",160,pi*pow(radio,2));/*operacion a realizar con el nuevo valor ingresado por el servidor*/
    getch();/*pausa del programa*/
    return 0;/*fin del programa*/
}