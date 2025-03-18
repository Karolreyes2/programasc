/* 
Karol Reyes Sánchez
17-De vocal minúscula a mayúscula
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado una vocal en minúscula (dato carácter).
Muestre por pantalla la misma vocal pero en mayúscula.
Nota: Si el dato introducido no es una vocal en minúscula, se mostrará el
mensaje: "ERROR: '<vocal>' no es una vocal minúscula".
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    char vocal;/*Declarar el dato a utilizar(char vocal)*/

    printf("Ingresa la vocal en min%cscula: ",163);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf ("%c",&vocal); /*lee el dato y lo guarda*/
    switch (vocal) /*switch simplifica el codigo, organiza varias ramas del caracter a ejecutar (vocal)*/
    {
    case 'a': printf("A"); /*case indica el caracter que se va a ejecutar (vocal en mayúscula)*/
        break; /*hace el flujo del codigo hasta la opcion del valor ingresado*/
    case 'e': printf("E");/*Ingresar en cada espacio cada una de las opciones (vocal mayúscula)*/
        break;  
    case 'i': printf("I");
         break;
    case 'o': printf("O");
         break;
    case 'u': printf("U");
        break;      
    default: printf("Error %c no es una vocal min%cscula",vocal,163); /*indica el bloque del codigo si no satisface ninguna de las etiquetas "case"*/       
    }
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}