/* 
Karol Reyes Sánchez
19-Calificar asignatura
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado la nota (dato real) de una asignatura.
Muestre por pantalla:
"SOBRESALIENTE", en el caso de que la nota sea mayor o igual que 9 y
menor o igual que 10.
"NOTABLE", en el caso de que la nota sea mayor o igual que 8 y menor que
9.
"BIEN", en el caso de que la nota sea mayor o igual que 6 y menor que 8.
"SUFICIENTE", en el caso de que la nota sea mayor o igual que 5 y menor
que 6.
"INSUFICIENTE", en el caso de que la nota sea mayor o igual que 3 y
menor que 5.
"MUY DEFICIENTE", en el caso de que la nota sea mayor o igual que 0 y
menor que 3.
"ERROR: Nota incorrecta", en el caso de que la nota sea menor que 0 o
mayor que 10.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    float nota;/*Declarar el valor entero a utilizar(float nota)*/
    printf("Ingresa nota: ");//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf("%f",&nota);/*lee el dato y lo guarda*/
        
        if (nota>=9 ) /*if se utiliza para una expresión condicional: si se cumple la condición ejecutará un bloque de código. Si es falsa, es posible ejecutar otras opciones.*/
        { printf("Sobresaliente"); /*declara el textro a mostrar si la condicion se cumple*/
    }else{
        if (nota>=8 )
        printf("Notable");
    else/*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
        if (nota>=6 )
        printf("Bien");
    else
        if (nota>=5 )
        printf("Suficiente");
    else 
        if (nota>=3 )
        printf("Insuficiente");
    else
        if (nota>=0)
        printf("Muy deficiente");
    else
    if (nota < 0 || nota > 10)
        printf("Error nota incorrecta");
}
     getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}