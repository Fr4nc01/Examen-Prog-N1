#include <stdio.h>
#include <stdlib.h>

#define CANT 10
#define MAX 1000

void acomodar(float numeros[MAX]){

    for(int i = 0 ; i < CANT ; i++){

        int ordenado;

        for(int j = 0 ; j < CANT - 1 -i ; j++){

            if(numeros[j] < numeros[j+1]){
                float aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
                ordenado = 1;
            }

        }
        if(ordenado == 0){
            break;
        }
    }
}

void mostrar(float numeros[MAX]){

    for(int i = 0 ; i < CANT ; i++){

    printf("[%.2f]",numeros[i]);

    }
    printf("\n\n");

}
