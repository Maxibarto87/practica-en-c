#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1 = 0;
    int num2 = 0;
    int suma = 0;

    // Entrada de datos
    printf("Ingrese el Numero 1: ");
    scanf("%d", &num1);
    printf("Ingrese el Numero 2: ");
    scanf("%d", &num2);

    // Cálculo de la suma
    suma = num1 + num2;
    printf("La suma es: %d\n\n", suma);

    // Condicional para verificar si la suma es mayor a 10
    if (suma > 10) {
        printf("La suma es mayor a 10\n");
    } else { // Se ejecuta si la condición es falsa
        printf("La suma no es mayor a 10\n");
    }

    return 0;
}