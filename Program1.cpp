//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, resultado;

    printf("Introduzca primer numero (entero): \n");
    scanf( "%d", &n1 );
    printf("Introduzca segundo numero (entero): \n");
    scanf( "%d", &n2 );

    resultado = n1 + n2;

    printf("La suma es: %d\n", resultado);

    exit(-1);
}