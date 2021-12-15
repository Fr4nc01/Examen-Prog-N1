#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define SI 1
#define NO 2

int main()
{

    int numeroOct = 789;
    int resuOct;
    int resuEntrada;
    int numeroEntrada;
    int opcion;
    int resultado;

    printf("Datos Personales: \n\n");
    printf("Nombre y Apellido: Franco Lezcano\n");
    printf("D.N.I: 44185229\n");
    printf("Email: lezcanofranco2002@gmail.com\n\n");

    printf("Funcion recursiva.\n\n");

    printf("Quiere escribir el octal?, de lo contrario se pondra un\n"
           "octal aleatorio predeterminado\n\n"
           "1- Si . 2- No \n\n");

    printf("Elija la opcion: ");
    scanf("%d", &opcion);

    if(opcion == SI){
        printf("Escriba el numero en decimal: ");
        scanf("%d", &resuEntrada);
        numeroEntrada = octalRecur(resuEntrada);

        printf("El numero octal de %d es: %d",resuEntrada,numeroEntrada);

    }else if(opcion == NO){

        resuOct = octalRecur(numeroOct);
        printf("El numero octal de %d es: %d",numeroOct,resuOct);

    }

    return 0;
}
