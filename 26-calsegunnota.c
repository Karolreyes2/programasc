/* 
Karol Reyes Sánchez
26- Calificación según nota validada
TDMS 1A 5244

[Instrucciones del problema]
Escribir en lenguaje C un programa que:
1º) Pida por teclado la nota (dato real) de una asignatura.
2º) En el caso de que la nota sea incorrecta, muestre por pantalla el mensaje:
"ERROR: Nota incorrecta, debe ser >;= 0 y <;= 10".
3º) Repita los pasos 1º y 2º, mientras que, la nota introducida sea incorrecta.
4º) Muestre por pantalla:
"APROBADO", en el caso de que la nota sea mayor o igual que 5.
"SUSPENDIDO", en el caso de que la nota sea menor que 5.
Nota: Utilizar un bucle while.
*/

#include <stdio.h> /*Librerias solicitadas*/
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    float nota;
    printf( "\n   Introduzca nota en n%cmero real: ",163 );
    scanf( "%f", &nota );
    while ( nota < 0 || nota > 10 )/*Condicion*/
    {
        printf("\n ERROR, nota incorrectadebe ser >= 0 y <= 10\n");/*Salida*/
        printf ("\n Ingrese nota en %cmero real: ",163); /*Se pide al usuario la nueva nota hasta que cumpla con la condicion*/
        scanf ("%f", &nota); /*Se guarda la nueva nota*/
    }if ( nota >= 5)/*Condicion con if por si se cumple o no la condicion*/
    printf("\n APROBADO");/*Salida*/
else /*else para agregar otra opcion si no cumple con la anterior*/
    printf("\n SUSPENDIDO");/*Salida*/
getch();/*Pausa*/
    
return 0;/*Termina el programa*/
}