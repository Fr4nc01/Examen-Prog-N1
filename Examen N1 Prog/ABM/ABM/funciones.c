#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

#define VACIO 0
#define ACTIVO 1
#define BORRADO 2

#define MAX 10
#define cant 40

//---------------------------------------- MENU
int menu(){

    int op;

    printf("1- Alta \n");
    printf("2- Baja \n");
    printf("3- Mostrar Todo\n");
    printf("4- Mostrar Activos\n");
    printf("5- Busqueda\n");
    printf("6- Salir\n\n");

    printf("Que desea realizar: ");
    scanf("%d",&op);

    return op;
}

//---------------------------------------- OPERACIONES

//---------------------------------------- INICIAR

void iniciar(persona persona[cant]){ // funcion para dejar todo en 0 y vacio

    for(int i = 0 ; i < MAX ; i ++ ){

        strcpy(persona[i].email,"");
        strcpy(persona[i].nomYApe,"");
        strcpy(persona[i].genero,"");
        persona[i].dni = 0;
        persona[i].diaNac = 0;
        persona[i].mesNac = 0;
        persona[i].yearNac = 0;

        persona[i].status = VACIO;
    }

}
//---------------------------------------- ALTA
void alta(persona persona[cant]){

    printf("Alta de datos: \n");
    printf("Ingrese los datos: \n\n");

    for(int i = 0 ; i < MAX ; i++){

        if(persona[i].status == VACIO){

            printf("D.N.I : ");
            scanf("%d", &persona[i].dni);
            printf("\n");

            fflush(stdin);
            printf("Nombre y Apellido: ");
            gets(persona[i].nomYApe);
            printf("\n");

            fflush(stdin);
            printf("E-mail: ");
            gets(persona[i].email);
            printf("\n");

            fflush(stdin);
            printf("Genero (Masculino - Femenino - X): ");
            gets(persona[i].genero);

            printf("\n\n");

            printf("Fecha de nacimiento: \n\n");

            printf("Dia de nacimiento: ");
            scanf("%d",&persona[i].diaNac);
            printf("\n");

            printf("Mes de nacimiento: ");
            scanf("%d",&persona[i].mesNac);
            printf("\n");

            printf("Anio de nacimiento: ");
            scanf("%d",&persona[i].yearNac);
            printf("\n");

            persona[i].status = ACTIVO;

            system("cls");
            break;

        }

    }

}
//---------------------------------------- BAJA
void baja(persona persona[cant]){

    printf("Baja de datos: \n");

    int posicion = buscar(persona);

    if(posicion != -1){

        persona[posicion].status = BORRADO;

    }else{
        printf("No se encontro a la persona");
    }

}
//---------------------------------------- MOSTRAR
void mostrar(persona persona[cant]){

    system("cls");

    printf("Mostrar todos los datos: \n");

    for(int i = 0 ; i < MAX ; i++){

        printf("D.N.I: %d \n"
               "Nombre y Apellido: %s \n"
               "Email: %s \n"
               "Genero: %s \n"
               "Fecha De Nacimiento: %d / %d / %d \n\n ",
               persona[i].dni,
               persona[i].nomYApe,
               persona[i].email,
               persona[i].genero,
               persona[i].yearNac,
               persona[i].mesNac,
               persona[i].diaNac

               );
    }

    system("pause");
    system("cls");

}
//---------------------------------------- MOSTRAR ACTIVOS
void mostrarActivos(persona persona[cant]){

    system("cls");

    printf("Mostrar todos los datos activos: \n");

    for(int i = 0 ; i < MAX ; i++){
        if(persona[i].status == ACTIVO)

        printf("D.N.I: %d \n"
               "Nombre y Apellido: %s \n"
               "Email: %s \n"
               "Genero: %s \n"
               "Fecha De Nacimiento: %d / %d / %d \n\n ",
               persona[i].dni,
               persona[i].nomYApe,
               persona[i].email,
               persona[i].genero,
               persona[i].yearNac,
               persona[i].mesNac,
               persona[i].diaNac

               );
    }

    system("pause");
    system("cls");

}
//---------------------------------------- BUSCAR DATOS
void busqueda(persona persona[cant]){

    int posicion;

    printf("Busqueda de datos: \n");

    posicion = buscar(persona);

    if(posicion != -1){

        printf("D.N.I: %d \n"
               "Nombre y Apellido: %s \n"
               "Email: %s \n"
               "Genero: %s \n"
               "Fecha De Nacimiento: %d / %d / %d \n\n ",
               persona[posicion].dni,
               persona[posicion].nomYApe,
               persona[posicion].email,
               persona[posicion].genero,
               persona[posicion].yearNac,
               persona[posicion].mesNac,
               persona[posicion].diaNac

               );

    }

}
//---------------------------------------- FUNCION PARA BUSCAR EL DATO CORRECTO
int buscar(persona persona[cant]){

    int pos = -1;
    char nombre[15];
    int dNi;

    printf("Por favor ingrese el D.N.I: ");
    scanf("%d", &dNi);

    for(int i = 0 ; i < MAX ; i++){

        if(persona[i].status == ACTIVO && persona[i].dni == dNi){
            pos = i;
            break;
        }
    }
    return pos;
}
