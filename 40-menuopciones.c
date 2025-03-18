/*
Karol Reyes Sánchez
40- Menú de opciones
TDMS 1A 5244

[Instrucciones del problema]
Si en lenguaje C se quiere escribir un programa que:
1º) Muestre un menú con 4 opciones:
1. Calcular el doble de un número entero.
2. Calcular la mitad de un número entero.
3. Calcular el cuadrado de un número entero.
4. Salir.
2º) Pida por teclado la opción deseada (dato entero).
3º) Ejecute la opción del menú seleccionada.
4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no seleccione la opción 4
(Salir) del menú.
*/

#include <stdio.h>/*Librerias solicitadas*/
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int numero, opcion;/*declaracion de variables a utilizar*/

    do
    {
        printf("\n   Seleccione una opci%cn de las que se muestran a continuaci%cn",162,162);/*opciones a elegir*/
        printf( "\n   1. Calcular el doble de un n%cmero entero", 163 );
        printf( "\n   2. Calcular la mitad de un n%cmero entero", 163 );
        printf( "\n   3. Calcular el cuadrado de un n%cmero entero", 163 );
        printf( "\n   4. Salir" );
        printf( "\n\n   Elija una opci%cn del 1 al 4: ", 162 );

        scanf( "%d", &opcion );/*guardar la opcion elejida*/

        /* Inicio del comando */

        switch ( opcion ) /*switch permite introducir varias ociones y ejecutarlas dependiendo de la opcion que haya sido escogida*/
        {
            case 1: printf( "\n   Introduzca un n%cmero entero: ", 163 );/*case es la promer opcion a ejecutar*/
                    scanf( "%d", &numero );
                    printf( "\n   El doble de %d es %d\n\n", numero, numero * 2 );/*ejecucion de la primera opcion*/
                    break;/*salta si no es la opcion escogida*/

            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &numero );
                    printf( "\n   La mitad de %d es: %.2f\n\n", numero, ( float ) numero / 2 );
                    break;

            case 3: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &numero );
                    printf( "\n   El cuadrado de %d es %d\n\n", numero, ( int ) pow( numero, 2 ) );
         }

         /* Fin del comando */

    } while ( opcion != 4 ); /*opcion 4 es igual o diferente de la opcion 4*/
    getch();
    return 0;/*fin del programa*/
}