/* 
Karol Reyes Sánchez
18-Calificar según nota
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado la nota (real) de una asignatura.
Muestre por pantalla:
"APTO", en el caso de que la nota sea mayor o igual que 7 y menor o igual
que 10.
"NO APTO", en el caso de que la nota sea mayor o igual que 0 y menor que
7.
"ERROR: Nota incorrecta", en el caso de que la nota sea menor que 0 o
mayor que 10.
*/


#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int nota;/*Declarar el valor entero a utilizar(int nota)*/
    printf("Ingresa nota: ");//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf("%d",&nota);/*lee el dato y lo guarda*/
    if (nota>=7&&nota <= 10 )/*if se utiliza para una expresión condicional: si se cumple la condición ejecutará un bloque de código. Si es falsa, es posible ejecutar otras opciones.*/
    { printf("Aprobado"); /*declara el textro a mostrar si la condicion se cumple*/

    }else{
        if (nota>=0&&nota<7 )
        printf("No aprobado");
    else/*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
        printf("Nota incorrecta");
    }
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}