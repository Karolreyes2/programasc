/* 
Karol Reyes Sánchez
16-Distancia de un planeta al Sol
TDMS 1A 5244

[Instrucciones del problema] 
Muestre el listado de los planetas (con sus números asociados).
Pida por teclado el número (dato entero) asociado a un planeta.
Muestre la distancia media al Sol, a la que se encuentra el planeta
seleccionado.
Nota: Si el número introducido por el usuario, no está asociado a ningún planeta,
se mostrará el mensaje: "ERROR: <número> no está asociado a ningún planeta".
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

int main(void){/*Marcar el inicio del programa con int main(void), despues agregar "{}" para abrir y declarar lo que se va a utilizar para la secuencia del programa*/
    int numero;/*Declarar el valor entero a utilizar(int numero)*/

    printf("Planetas del sistema solar:\n 1.Mercurio \n 2.Venus \n 3.Tierra \n 4.Marte \n 5.J%cpiter \n 6.Saturno \n 7.Urano \n 8.Neptuno \n 9.Plut%cn \n",163,162);//utilizar ( para separar el codigo de la accion), "para mostrar el texto", printf() permite mostrar cadenas de texto, valores numéricos, caracteres, imprimir el texto y otros tipos, \n indica el salto de linea    
    printf("Ingrese un n%cmero de alguno de los planetas para saber su distancia media al Sol en millones de kil%cmetros: ",163,162);
    scanf ("%d",&numero); /*lee el dato y lo guarda*/
    switch (numero) /*switch simplifica el codigo, organiza varias ramas del codigo a ejecutar (numero)*/
    {
    case 1: printf("59"); /*case indica el valor que se va a ejecutar (numero)*/
        break; /*hace el flujo del codigo hasta la opcion del valor ingresado*/
    case 2: printf("108");/*Ingresar en cada espacio cada una de las opciones (kilómetros)*/
        break;  
    case 3: printf("150");
         break;
    case 4: printf("228");
         break;
    case 5: printf("750");
        break;      
    case 6: printf("1431");
        break;
    case 7: printf("2877");
        break;
    case 8: printf("4509");
        break;
   case 9: printf("5916");
        break;
    default: printf("Error %d no est%c asociado con ning%cn planeta",numero,160,163); /*indica el bloque del codigo si no satisface ninguna de las etiquetas "case"*/       
    }/*%d inidacor para poder imprimir el numoero previamente guardado en el programa, %c parapoder poner asentos o un codigo*/
    getch();
    return 0;/*terminar el programa con return 0;, siempre poner ; al terminar una accion*/
}