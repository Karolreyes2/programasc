/* 
Karol Reyes Sánchez
13-Dia de la semana
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado el número (dato entero) de un día de la semana.
Muestre por pantalla el nombre (dato cadena) correspondiente a dicho día.
Nota: Si el número de día introducido es menor que 1 ó mayor que 7, se mostrará
el mensaje: "ERROR: Día incorrecto".
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int dia;/*Declarar el valor entero a utilizar(int)*/

    printf("Ingresa el dia: ");//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf ("%d",&dia); /*lee el dato y lo guarda*/
    switch (dia) /*switch simplifica el codigo, organiza varias ramas del codigo a ejecutar (dias)*/
    {
    case 1: printf("Lunes"); /*case indica el valor que se va a ejecutar (dia)*/
        break; /*hace el flujo del codigo hasta la opcion del valor ingresado*/
    case 2: printf("Martes");/*Ingresar en cada espacio cada una de las opciones (dias)*/
        break;  
    case 3: printf("Miercoles");
         break;
    case 4: printf("Jueves");
         break;
    case 5: printf("Viernes");
        break;      
    case 6: printf("Sabado");
        break;
    case 7: printf("Domingo");
        break;
    default: printf("Error d%ca incorrecto",161); /*indica el bloque del codigo si no satisface ninguna de las etiquetas "case"*/       
    }
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}