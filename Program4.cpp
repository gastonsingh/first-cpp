//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 4 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float a, b, c, per;
    printf("ingrese la longitud del lado 1: ");
    scanf("%f",&a);
    printf("ingrese la longitud del lado 2: ");
    scanf("%f",&b);
    printf("ingrese la longitud del lado 3: ");
    scanf("%f",&c);

    per=a+b+c;

    printf("El perimetro del triangulo es %f\n", per);

    exit(-1);
}