#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define MAX 1000
#define CANT 10

int main()
{
    float numeros[MAX];

    printf("Datos Personales: \n\n");
    printf("Nombre y Apellido: Franco Lezcano\n");
    printf("D.N.I: 44185229\n");
    printf("Email: lezcanofranco2002@gmail.com\n\n");

    printf("Ingrese a continuacion los numeros que quiere acomodar: \n\n");
    printf("Escriba: \n\n");
    for(int i = 0 ; i < CANT ; i++){

        printf("%d- ",i);
        scanf("%f",&numeros[i]);
        printf("\n");

    }

    acomodar(numeros);
    printf("\n\n");
    mostrar(numeros);


    return 0;
}
