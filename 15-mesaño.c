/* 
Karol Reyes Sánchez
15-Mes del año
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado el número (dato entero) de un mes del año.
Muestre por pantalla el nombre (dato cadena) correspondiente a dicho mes.
Nota: Si el número de mes introducido es menor que 1 ó mayor que 12, se
mostrará el mensaje: "ERROR: Mes incorrecto".
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int mes;/*Declarar el valor entero a utilizar(int mes)*/

    printf("Ingresa el n%cmero del mes: ",163);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf ("%d",&mes); /*lee el dato y lo guarda*/
    switch (mes) /*switch simplifica el codigo, organiza varias ramas del codigo a ejecutar (mes)*/
    {
    case 1: printf("Enero"); /*case indica el valor que se va a ejecutar (mes)*/
        break; /*hace el flujo del codigo hasta la opcion del valor ingresado*/
    case 2: printf("Febrero");/*Ingresar en cada espacio cada una de las opciones (meses)*/
        break;  
    case 3: printf("Marzo");
         break;
    case 4: printf("Abril");
         break;
    case 5: printf("Mayo");
        break;      
    case 6: printf("Junio");
        break;
    case 7: printf("Julio");
        break;
    case 8: printf("Agosto");
        break;  
    case 9: printf("Septiembre");
         break;
    case 10: printf("Octubre");
         break;
    case 11: printf("Noviembre");
        break;      
    case 12: printf("Diciembre");
        break;
    default: printf("Error %d, mes incorrecto",mes); /*indica el bloque del codigo si no satisface ninguna de las etiquetas "case"*/       
    }/*%d inidacor para poder imprimir el numoero previamente guardado en el programa, %c parapoder poner asentos*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}