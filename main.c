#include <stdio.h>
#include "funciones.c" //USAR FUNCIONES QUE HICE
//Prueba de swap
int main() {

    int num1 = 10;
    int num2 = 25;

    printf("Valores originales:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("\nValores después del intercambio:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
//Prueba de longitudCadena
int main() {

    char cadena[] = "Prueba texto";

    int len1 = longitudCadena(cadena);

    printf("La cadena es: \"%s\"\n", cadena);
    printf("La longitud de la cadena es: %d\n\n", len1); 

    return 0;
}
//Prueba de invertirArreglo
int main() {
    int Arreglo[] = {10, 20, 30, 40, 50};

    int tam = sizeof(Arreglo) / sizeof(int);

    printf("Arreglo original 1 (tamaño impar):\n");
    imprimirArreglo(Arreglo, tam);

    invertirArreglo(Arreglo, tam);

    printf("Arreglo invertido 1:\n");
    imprimirArreglo(Arreglo, tam);

    return 0;
}
