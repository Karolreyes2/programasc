/* 
Karol Reyes Sánchez
11-Año bisiesto o no
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado un año (dato entero).
Muestre por pantalla:
"ES BISIESTO", en el caso de que el año sea bisiesto.
"NO ES BISIESTO&quot", en el caso de que el año no sea bisiesto.
Nota: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
múltiplos de 100 pero no de 400.
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int año, numero;/*Declarar valores y codigo a utilizar(int,reales)*/
    float bisiesto;
    
    printf("Ingrese el a%co: ",164);//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%d",&año);/*guardar valor*/

    if (año %4==0&&año!=100 || año%400==00)/*pedir al programa la operacion a realizar, separando los datos a utilizar y dando opciones si es el dato que se quiere*/
    
    {printf ("El a%co es bisiesto",164);/*mostrar los resultados del problema al usuario*/
        /* code */
    }else{printf ("El a%co no es bisiesto",164);}/*mostrar los resultados del problema al usuario*/
    /*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}