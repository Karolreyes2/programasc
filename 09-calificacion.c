/* 
Karol Reyes Sánchez
09-Calificación segun notas
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado la nota (dato real) de una asignatura.
Muestre en pantalla:
"APROBADO", en el caso de que la nota sea mayor o igual que 7.
"REPROBADO", en el caso de que la nota sea menor que 7.
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int nota;/*Declarar valores o reales a utilizar*/
    
    printf("Ingresa la nota: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%d",&nota);/*guardar valor*/
    if (nota>=7)/*declarar que la nota tiene que ser igual o mayor que*/
    {printf ("Aprobado");/*mostrar los resultados del problema al usuario*/
        /* code */
    }else{printf ("No aprobado");}/*mostrar los resultados del problema al usuario*/
    /*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}