#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define cant 40

typedef struct persona{

    int dni;
    char nomYApe[cant];
    char email[cant];
    char genero[cant];
    int diaNac;
    int mesNac;
    int yearNac;
    int status;

}persona;

int menu();

void iniciar(persona persona[cant]);

void mostrar(persona persona[cant]);
void mostrarActivos(persona persona[cant]);
void alta(persona persona[cant]);
void baja(persona persona[cant]);
void busqueda(persona persona[cant]);
int buscar(persona persona[cant]);

#endif // FUNCIONES_H_INCLUDED
