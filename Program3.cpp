//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 3 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, r1;

    printf("Introduzca primer numero (entero): \n");
    scanf( "%d", &n1 );
    printf("Introduzca segundo numero (entero): \n");
    scanf( "%d", &n2 );
    printf("Introduzca segundo numero (entero): \n");
    scanf( "%d", &n3 );

    r1 = n1 + n2 + n3;

    printf("Primer resultado: %d\n", r1);

    exit(-1);
}