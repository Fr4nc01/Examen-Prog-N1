#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define cant 40

int main()
{
    persona persona1[cant];
    iniciar(persona1);
    int opcion;

    printf("Datos Personales: \n\n");
    printf("Nombre y Apellido: Franco Lezcano\n");
    printf("D.N.I: 44185229\n");
    printf("Email: lezcanofranco2002@gmail.com\n\n");

    do{

        opcion = menu();

        switch(opcion){

        case 1: alta(persona1); break;
        case 2: baja(persona1); break;
        case 3: mostrar(persona1); break;
        case 4: mostrarActivos(persona1); break;
        case 5: busqueda(persona1); break;

        }

    }while(opcion != 6);


    return 0;
}
