/* 
Karol Reyes Sánchez
23-Digitos de un numero entero
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado un número (dato entero).
Muestre por pantalla el número de dígitos que tiene el número introducido por
el usuario.
Nota: Si el número introducido tiene 4 ó más dígitos, se mostrará el mensaje:
Tiene más de 3 dígitos.
 */

 #include <stdio.h> /*Librerias solicitadas*/
 #include <stdlib.h>
 #include <conio.h>
 #include <math.h> 

 int main(){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/

    int num;/*Declarar el valor entero a utilizar(int num)*/
   
    printf("ingrese un n%cmero:  ",163);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf("%d",&num);/*lee el dato y lo guarda*/

    if( num<=999 ){/*if se utiliza para una expresión condicional: si se cumple la condición ejecutará un bloque de código. Si es falsa, es posible ejecutar otras opciones.*/
        if( num<=9 ){
            printf(" Un d%cgito",161);
        }else{
        if( num<=99 ){
            printf(" Dos d%cgitos",161);
        }else{
            printf(" Tres d%cgitos",161);
        
        }
        }
     }
     else{
        printf(" Tiene m%cs de tres d%cgitos",160,161);
     }
     getch();
    
    return 0;
     }