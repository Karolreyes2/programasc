/* 
Karol Reyes Sánchez
06-Volumen de un cubo
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
    float volumen, lado;/*Declarar valores o datos a utilizar*/
    
    printf("Ingrese el valor de un lado del cubo: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%f",&lado);/*guardar valor*/
    volumen=pow(lado,3);//POw(lado,3);/*pedir al programa realizar la operacion correspondiente,pow se utiliza para elevar un numero a una potencia, despues se escribe a la potencia que se desea elevar el numero */
    printf("El volumen de un cubo con lados de %.1f es: %.1f",lado,volumen);/*mostrar los resultados del problema al usuarioutilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran*/

    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/

}