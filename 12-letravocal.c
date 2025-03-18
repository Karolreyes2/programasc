/* 
Karol Reyes Sánchez
12-Letra vocal
TDMS 1A 5244

[Instrucciones del problema]
Pida por teclado una letra (dato carácter) del abecedario.
Muestre por pantalla:
"ES UNA VOCAL", cuando la letra introducida sea una vocal minúscula (a,e, i, o, u) o una vocal mayúscula (A, E, I, O, U).
"NO ES UNA VOCAL", cuando la letra introducida no sea una vocal minúscula (a, e, i, o, u) ni una vocal mayúscula (A, E, I, O, U).
*/

#include <stdio.h>/*librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 


int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    char letra[50];/*Declarar el caracter a utilizar(char)*/
    
    printf("Ingresa una letra: ");//Imprime texto, utilizar ( para separar el codigo de la accion), "para mostrar el texto"
    scanf("%s",&letra);/*guarda el valor*/
    if (letra=='a'||letra=='A'||letra=='e'||letra=='E'||letra=='i'||letra=='I'||letra=='o'||letra=='O'||letra=='u'||letra=='U')/*pedir al programa la operacion a realizar separando los valores con || que es or, == igual que y las vocales u opciones a elegir*/
    {printf ("La letra es vocal");/*mostrar los resultados del problema al usuario*/
        /* code */
    }else{printf ("La letra no es vocal");}/*mostrar los resultados del problema al usuario*/
    /*else se utiliza para hacer opciones, si no pasa la primera,entoces es la segunda y asi consecutivamente*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}