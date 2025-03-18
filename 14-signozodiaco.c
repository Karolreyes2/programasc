/* 
Karol Reyes Sánchez
14-Signo del zodiaco
TDMS 1A 5244

[Instrucciones del problema] 
Muestre un listado de los signos del zodíaco, con sus números asociados.
Pida por teclado un número (dato entero) asociado a un signo del zodíaco.
Muestre la categoría a la que pertenece el signo del zodíaco seleccionado.
Nota: Si el número introducido por el usuario, no está asociado a ningún signo del
zodíaco, se mostrará el mensaje: "ERROR: <número> no está asociado a ningún
signo".
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int numero;/*Declarar el valor entero a utilizar(int)*/

    printf("Categor%cas de los signos del zod%caco:\n 1.Aries \n 2.Tauro \n 3.G%cminis \n 4.C%cncer \n 5.Leo \n 6.Virgo \n 7.Libra \n 8.Escorpio \n 9.Sagitario \n 10.Capricornio \n 11.Acuario \n 12.Piscis \n",161,161,130,160);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos, \n indica el salto de linea    
    printf("Ingrese un numero del signo del zod%caco para saber su categor%ca: ",161,161);
    scanf ("%d",&numero); /*lee el dato y lo guarda*/
    switch (numero) /*switch simplifica el codigo, organiza varias ramas del codigo a ejecutar (numero)*/
    {
    case 1: printf("Fuego"); /*case indica el valor que se va a ejecutar (numero)*/
        break; /*hace el flujo del codigo hasta la opcion del valor ingresado*/
    case 2: printf("Tierra");/*Ingresar en cada espacio cada una de las opciones (categorias)*/
        break;  
    case 3: printf("Aire");
         break;
    case 4: printf("Agua");
         break;
    case 5: printf("Fuego");
        break;      
    case 6: printf("Tierra");
        break;
    case 7: printf("Aire");
        break;
    case 8: printf("Agua");
        break;
   case 9: printf("Fuego");
        break;
   case 10: printf("Tierra");
       break;      
   case 11: printf("Aire");
       break;
   case 12: printf("Agua");
        break;
    default: printf("Error %d no est%c asociado a ning%cn signo",numero,160,163); /*indica el bloque del codigo si no satisface ninguna de las etiquetas "case"*/       
    }/*%d inidacor para poder imprimir el numoero previamente guardado en el programa, %c parapoder poner asentos o un codigo*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}