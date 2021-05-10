//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 5 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float a, b, sup, per, hip;
    printf("ingrese la longitud de un cateto del triangulo rectangulo  ");
    scanf("%f",&a);
    printf("ingrese la longitud del otro cateto  ");
    scanf("%f",&b);

    hip=sqrt( (a*a) + (b*b) );

    sup=(a*b)/2;

    per=a+b+hip;

    printf("La hipotenusa del triangulo rectangulo es %f, su perimetro es %f y su superficie es %f\n", hip, per, sup);

    exit(-1);
}