/* 
Karol Reyes Sánchez
07-Suma y multiplicacion de dos números
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado la arista (dato real) de un cubo.
Calcule el volumen del cubo.
Muestre por pantalla el resultado (dato real).
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    float suma, multiplicacion, x, z;/*Declarar valores y variables a utilizar*/
    
    printf("Ingresa el valor de x: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&x);/*guardar valor*/
    printf("Ingrese el valor de z: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&z);/*guardar valor*/
    suma=x+z;/*pedir al programa realizar la operacion correspondiente */
    printf("\nLa suma de %.2f y de %.2f es: %.2f", x, z, suma);/*mostrar los resultados del problema al usuario,utilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran, se utiliza el n/ para saltar el guion en el texto que le aparece al usuario*/
    multiplicacion=x*z;/*pedir al programa realizar la operacion correspondiente */
    printf("\nLa multiplicacion de %.2f y de %.2f es: %.2f",x,z, multiplicacion);/*mostrar los resultados del problema al usuario,utilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran*/

    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}