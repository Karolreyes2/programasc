/* 
Karol Reyes Sánchez
21-La hora un segudo despues
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado una hora en tres variables: horas, minutos y segundos (datos
enteros).
2º) Muestre por pantalla la hora un segundo después.
Nota 1: Si la hora introducida por el usuario es incorrecta, se debe mostrar el
mensaje: "ERROR: La hora es incorrecta".
Nota 2: Para que una hora sea válida, se tiene que cumplir que:
Las horas deben ser mayor o igual que 0 y menor o igual que 23.
Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
Los segundos deben ser mayor o igual que 0 y menor o igual que 59.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main()/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
{
    int h,m,s;/*Declarar el valor entero a utilizar(int horas,minutos,segundos)*/

    printf( "\n   Introduzca horas: ");//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf( "%d",&h);/*lee el dato y lo guarda*/

    printf( "\n   Introduzca minutos: ");
    scanf( "%d",&m );
    printf( "\n   Introduzca segundos: ");
    scanf( "%d",&s );
    if (h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59)/*if se utiliza para una expresión condicional: si se cumple la condición ejecutará un bloque de código. Si es falsa, es posible ejecutar otras opciones.*/
        s++;
        if (s==60){
            s=0;
            m++;
            if (m==60){
                m=0;
                h++;
                if (h==24)
                h==0;
                {
            
            }
    printf("\n Un segundo despu%cs la hora es:%d",130,h,m,s);
            
        }else{
        printf("\n Error: la hora es incorrecta");
        }
        getch ();

        return 0;
        }
    }
    