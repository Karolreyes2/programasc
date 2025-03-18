/* 
Karol Reyes Sánchez
UA2-Examen
TDMS 1A 5244

[Instrucciones del problema] 
Escribir en lenguaje C un programa que:
1º) Pida por teclado una fecha en tres variables: día, mes y año (datos enteros).
2º) Muestre por pantalla:
"FECHA CORRECTA", en el caso de que la fecha sea válida.
"FECHA INCORRECTA", en el caso de que la fecha no sea válida.
Nota 1: Para que una fecha sea válida, se tiene que cumplir que:
El mes debe ser mayor o igual que 1 y menor o igual que 12.
El día debe ser mayor o igual que 1 y menor o igual que un número, el cual
dependerá del mes y año introducidos por el usuario.
Nota 2:
Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
Tienen 30 días: abril, junio, septiembre y noviembre.
Tiene 29 días: febrero (si el año es bisiesto).
Tiene 28 días: febrero (si el año no es bisiesto).
Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
múltiplos de 100 pero no de 400.
*/

#include <stdio.h> /*if (año%100!=0 || año%400==0)*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    int dia,mes,año;/*Declarar el valor entero a utilizar(int dia,mes,año)*/

    printf( "\n Introduzca a%co: ", 164 );//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf( "%d",&año );/*lee el dato y lo guarda*/

    printf( "\n Introduzca el n%cmero del mes: ",163);
    scanf( "%d", &mes );

    printf( "\n Introduzca el n%cmero del d%ca: ",163,161);
    scanf( "%d", &dia );
    switch ( mes )/*switch simplifica el codigo, organiza varias ramas del caracter a ejecutar (mes)*/
    {
          case  1 :
          case  3 :
          case  5 :
          case  7 :
          case  8 :
          case 10 :
          case 12 : if (dia>=1 && dia<=31){
            printf("\n FECHA CORRECTA, 31 d%cas", 161);/*agregar if para poner la condicion del dia, despues la opcion correcta y al final la ultima opción por si no se cumple ninguna*/
          }else{
            printf("\n  FECHA INCORRECTA");
          }
                    break;
                    case  4 :
          case  6 :
          case  9 :
          case 11 : if (dia>=1 && dia<=30){
            printf( "\n FECHA CORRECTA, 30 d%cas", 161 );
          }else{
            printf("\n FECHA INCORRECTA");
          }
          
                    break;

          case  2 : if ( año %4==0&&año!=100 || año%400==00 ){
            if (dia>=1 && dia<=29){
                printf( "\n FECHA CORRECTA, 29 d%cas", 161 );
            }else
            printf("\n FECHA INCORRECTA");
            }else if (dia>=1 && dia<=28)
                printf( "\n FECHA CORRECTA, 28 d%cas", 161 );
            else{
                printf("\n FECHA INCORRECTA");

          }
                    
                    break;
                
        default : printf("\n FECHA INCORRECTA");
    

    getch(); 

    return 0;
    }
}    
    