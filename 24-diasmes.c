/* 
Karol Reyes Sánchez
24-Dias de un mes
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado un año (dato entero).
Pida por teclado un mes (dato entero) de ese año.
Muestre por pantalla el número de días que tiene dicho mes.
Nota 1: Si el número de mes introducido es menor que 1 ó mayor que 12, se
mostrará el mensaje:ERROR: Mes incorrecto.
Nota 2:
Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
Tienen 30 días: abril, junio, septiembre y noviembre.
Tiene 29 días: febrero (si el año es bisiesto).
Tiene 28 días: febrero (si el año no es bisiesto).
Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
múltiplos de 100 pero no de 400.
 */

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
{
    int year, mes;/*Declarar el valor entero a utilizar(int year,mes)*/

    printf( "\n   Introduzca a%co: ", 164 );//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf( "%d", &year );/*lee el dato y lo guarda*/

    printf( "\n   Introduzca el n%cmero del mes: ",163);
    scanf( "%d", &mes );

    switch ( mes )/*switch simplifica el codigo, organiza varias ramas del caracter a ejecutar (vocal)*/
    {
          case  1 :
          case  3 :
          case  5 :
          case  7 :
          case  8 :
          case 10 :
          case 12 : printf( "\n   31 d%cas", 161 );
                    break;
                    case  4 :
          case  6 :
          case  9 :
          case 11 : printf( "\n   30 d%cas", 161 );
                    break;

          case  2 : if ( year%4==0 && year%100!=0 || year%400==0 ){
                        printf( "\n   29 d%cas", 161 );
                    }else{
                        printf( "\n   28 d%cas", 161 );
                    }
                    break;

                    

        default : printf("\n   ERROR: Mes incorrecto.");
    }

    getch(); 

    return 0;
}