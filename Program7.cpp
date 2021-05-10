//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 7 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, r1, r2, r3;

    printf("Introduzca primer numero (entero): \n");
    scanf( "%d", &n1 );
    printf("Introduzca segundo numero (entero): \n");
    scanf( "%d", &n2 );

    r1 = n1 + n2;
    r2 = n1 * n2;
    r3 = r1 - r2;


    printf("Suma: %d\n", r1);
    printf("Producto: %d\n", r2);
    printf("Resta: %d\n", r3);

    exit(-1);
}