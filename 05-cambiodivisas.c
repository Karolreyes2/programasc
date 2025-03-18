/* 
Karol Reyes Sánchez
04-Cambio de divisas
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado una cantidad (dato entero) en Pesos.
Calcule su equivalente en euros.
Muestre por pantalla el resultado (dato real).
1Euro = 21.30 pesos
*/

    #include <stdio.h>/*librerias solicitadas*/
    #include <stdlib.h>
    #include <conio.h>
    #include <math.h>

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int pesos;
    float euros, tasa_cambio=21.30;/*Declarar valores y datos a utilizar*/
   
    printf("Ingrese la cantidad de pesos a convertir: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%d",&pesos);/*guardar valor*/
    euros=pesos/tasa_cambio;//(pesos*euros);/*pedir al programa realizar la operacion correspondiente */
    
    printf("El valor de %d pesos a euros es: %.2f",pesos,euros);/*mostrar los resultados del problema al usuario,utilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran*/

    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/

}