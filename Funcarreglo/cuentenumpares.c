#include <stdio.h>
#include <stdlib.h>

void holamundo() {
    printf("Hola Mundo\n");
}

void contarPares(int pnum1, int pnum2, int *pcont) {
    *pcont = 0; // Inicializar el contador en cero
    for (int i = pnum1; i <= pnum2; i++) {
        if (i % 2 == 0) { // Verificar si el número es par
            (*pcont)++;
        }
    }
}

int main(int argc, char *argv[]) {
    int num1, num2, cont;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Usando la función que cuenta los números pares
    contarPares(num1, num2, &cont); 

    printf("\nLa cantidad de numeros pares entre %d y %d es: %d\n", num1, num2, cont);

    return 0;
}