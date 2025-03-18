/* 
Karol Reyes Sánchez
03-Área de un circulo
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado el radio (dato real) de una circunferencia.
Calcule el área de la circunferencia.
Muestre por pantalla el resultado (dato real).
*/
#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    float radio, area, pi=3.1416;/*Declarar valores o reales a utilizar*/
    
    printf("Ingrese el valor de radio: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&radio);/*guardar valor*/
    area=pow(radio,2)*pi;//POw(radio,2);/*pedir al programa realizar la operacion correspondiente */
    printf("El %crea de un circulo con radio %.2f es: %.2f",160,radio,area);/*mostrar los resultados del problema al usuario,utilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran,se utiliza el .2 por los decimales que quieres que aparezcan*/

    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}
