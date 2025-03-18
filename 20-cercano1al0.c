/* 
Karol Reyes Sánchez
20-Cercano al 1 ó al 0
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado un número (dato real).
Muestre por pantalla:
"Está más cercano al 1", en el caso de que el número introducido esté más
cercano al 1 que al 0.
"Está más cercano al 0";, en el caso de que el número introducido esté más
cercano al 0 que al 1.
"Está en medio", en el caso de que el número introducido sea el 0.5.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main()/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
  {
    float num;/*Declarar el valor entero a utilizar(float num)*/

    printf("Ingresa un n%cmero: ",163);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf("%f",&num);/*lee el dato y lo guarda*/
    if(num!=0.5){/*if se utiliza para una expresión condicional: si se cumple la condición ejecutará un bloque de código. Si es falsa, es posible ejecutar otras opciones.*/
        if(num>0.50){
        printf("Esta m%cs cercano al 1",160);/*declara el textro a mostrar si la condicion se cumple*/
        }
        else{
            printf("Esta m%cs cercano al 0",160);
        }
    }
    else{/*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
        printf("Esta en el medio");
    }
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/

  }