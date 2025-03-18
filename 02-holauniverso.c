/* 
Karol Reyes Sánchez
02-Hola Universo
TDMS 1A 5244

[Instrucciones del problema]
Dar un saludo donde diga "Hola universo" atravez de un clic
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    
    printf("Hola universo\n");//Imprime el texto, \n se utiliza para saltar el guion que le aparece al usuario

    printf("\nOprime cualquier boton para terminar el programa");
    getch();//pausa esperando cualquier valor para terminar el programa
    
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}