/* 
Karol Reyes Sánchez
21-Edad de una persona
TDMS 1A 5244

[Instrucciones del problema] 
Pida por teclado la edad (dato entero) de una persona.
Muestre por pantalla:
BEBÉ en el caso de que la edad sea 0 ó 1.
NIÑO en el caso de que la edad sea mayor o igual que 2 y menor o igual
que 12.
ADOLESCENTE en el caso de que la edad sea mayor o igual que 13 y
menor o igual que 17.
JOVEN en el caso de que la edad sea mayor o igual que 18 y menor o
igual que 30.
ADULTO en el caso de que la edad sea mayor o igual que 31 y menor o
igual que 64.
ANCIANO en el caso de que la edad sea mayor o igual que 65 y menor o
igual que 120.
ERROR: Edad incorrecta en el caso de que la edad sea menor que 0 o
mayor que 120.
 */

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main()/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
  {
    int age;/*Declarar el valor entero a utilizar(int age)*/
    
    printf("ingresa tu edad: ");//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos.
    scanf("%d",&age);/*lee el dato y lo guarda*/

    if(age>=0 && age<=120){
        if(age>=0 && age<2){
        printf("BEB%c",144);
        }
        if(age>=2 && age<=12){           
            printf("NI%cO",165);
        }

        if(age>=13 && age<=17){
            printf("ADOLESCENTE",130);
        }
    
        if(age>=18 && age<=30){
            printf("JOVEN");
        }

        if(age>=31 && age<=64){
            printf("ADULTO",130);
        }
    
        if(age>=65 && age<=120){
            printf("ANCIANO");
        }
    }
    else{
        printf("ERROR:edad incorrecta");
    }

    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/

  }