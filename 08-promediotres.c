/* 
Karol Reyes Sánchez
08-Promedio de tres examenes
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado la nota de tres exámenes (datos reales).
Calcule la nota media de los tres exámenes.
Muestre por pantalla el resultado (dato real).
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    float promedio, a, b,c;/*Declarar valores o variables a utilizar*/
    
    printf("Ingresa el valor del primer examen: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&a);/*guardar valor*/
    printf("Ingrese el valor del segundo examen: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&b);/*guardar valor*/
    printf("Ingresa el valor del tercer examen: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&c);/*guardar valor*/
    promedio=(a+b+c)/3;/*pedir al programa realizar la operacion correspondiente */
    printf("El promedio de %.2f, %.2f, %.2f es: %.2f", a,b,c,promedio);/*mostrar los resultados del problema al usuarioutilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran*/
    
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}