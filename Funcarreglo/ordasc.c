#include <stdio.h>
#include <stdlib.h>

void holamundo() {
    printf("Hola Mundo\n");
}

void contarPares(int pnum1, int pnum2, int *pcont, int *pares) {
    *pcont = 0; // Inicializar el contador en cero
    for (int i = pnum1; i <= pnum2; i++) {
        if (i % 2 == 0) { // Verificar si el número es par
            pares[(*pcont)++] = i; // Almacenar el número par
        }
    }
}

void ordenarAscendente(int *pares, int cont) {
    for (int i = 0; i < cont - 1; i++) {
        for (int j = 0; j < cont - i - 1; j++) {
            if (pares[j] > pares[j + 1]) {
                int temp = pares[j];
                pares[j] = pares[j + 1];
                pares[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int num1, num2, cont;
    int pares[100]; // Asignar un tamaño suficiente para almacenar pares

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Usando la función que cuenta los números pares
    contarPares(num1, num2, &cont, pares); 

    // Ordenar los números pares
    ordenarAscendente(pares, cont);

    printf("\nLa cantidad de numeros pares entre %d y %d es: %d\n", num1, num2, cont);
    printf("Numeros pares en orden ascendente: ");
    for (int i = 0; i < cont; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}