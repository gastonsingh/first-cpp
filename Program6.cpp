//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 6 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lad1, lad2, diag, sup, per;
    printf("Ingresa valor del primer lado: ");
    scanf("%f",&lad1);
    printf("Ingresa valor del segundo lado: ");
    scanf("%f",&lad2);

    diag=sqrt(pow(lad1,2)+pow(lad2,2));
    per=2*(lad1+lad2);
    sup=lad1*lad2;


    printf("La diagonal del cuadrado es %f, su perimetro es %f y su superficie es %f\n", diag, per, sup);

    exit(-1);

}