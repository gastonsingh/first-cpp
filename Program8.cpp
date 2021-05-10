//
// Created by Gaston Singh on 10/05/2021.
//

/* Programa 8 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1, t1, sueldo;

    printf("Ingresar el valor de la hora: ");
    scanf("%d",&v1);

    printf("Ingresar el tiempo trabajado: ");
    scanf("%d",&t1);

    sueldo=(v1*t1);

    printf("Sueldo: %d\n",sueldo);

    exit(-1);
}