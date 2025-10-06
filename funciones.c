// Funcion: swap
// Intercambiar lo valores de dos enteros usando apuntadores.
// Parametros: a y b, apuntadores a enteros.
// Retorno: Ninguno.
#include <stdio.h>

void swap(int *a, int *b) {

    int temp = *a;

    *a = *b;
    *b = temp;
}
// Funcion: longitudCadena
// Calcular la longitud de una cadena
// Parametros: cadena, apuntador a cadena
// Retorno: Longitud de la cadena.
#include <stdio.h>
int longitudCadena(char *cadena) {

    char *comienzo = cadena;

    while (*cadena != '\0') {
        cadena++;
    }

    return cadena - comienzo;
}

#include <stdio.h>

void imprimirArreglo(int *arr, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("]\n");
}
// Funcion: invertirArreglo
// INvierte los elementos de un arreglo usando apuntadores.
// Parametros: arr->apuntador al arreglo
// Retorno: Ninguno.
void invertirArreglo(int *arr, int size) {
    int *inicio = arr;

    int *fin = arr + size - 1;

    while (inicio < fin) {
        int temp = *inicio;

        *inicio = *fin;

        *fin = temp;

        inicio++;

        fin--;
    }
}
// Funcion: cuentaPares
// Cuenta cuantos números pares hay en un arreglo
// Parametros: arr-> apuntador al arreglo, size -> tamaño del arreglo
// Retorno: Cantidad de números pares.
#include <stdio.h>

int cuentaPares(int *arr, int size) {
    int contador = 0;

    int *fin = arr + size;

    for (; arr < fin; arr++) {
        if (*arr % 2 == 0) {
            contador++;
        }
    }

    return contador;
}
// Funcion auxiliar: imprimirArreglo
// Imprime los elementos de un arreglo

void imprimirArreglo(int *arr, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("]\n");
}
