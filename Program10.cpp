//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 10 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1,b1,sueldo,sueldo1,sueldo2;

    printf("ingrese valor del vehiculo: ");
    scanf("%d",&a1);
    printf("ingrese cantidad de autos vendido: ");
    scanf("%i",&b1);

    sueldo=(10*a1)/100;
    sueldo1=sueldo+(b1*50);
    sueldo2=sueldo1+500;

    printf("Sueldo: %d\n",sueldo2);

    exit(-1);
}