/* 
Karol Reyes Sánchez
04-Saludo
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado el nombre (dato cadena) de una persona.
Muestre por pantalla el mensaje:"Hola <nombre>, buenos días"
*/
#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    char nombre[20];/*Declarar el caracter y las letras a utilizar*/
    printf("Ingresa tu nombre: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%s", nombre);/*guardar valor*/
    printf("\nHola %s, buenos d%cas", nombre,161);/*mostrar los resultados del problema al usuario,utilizando%f para poner los datos que al final de las comillas se acomodan por el orden en el que apareceran, /n se utiliza para saltar el guion que le aparece al usuario*/
    getch();

    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}