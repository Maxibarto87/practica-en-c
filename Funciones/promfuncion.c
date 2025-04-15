#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void holamundo(); // Prototipado
void holamundo() {
    printf("Hola Mundo\n");
}

void sumarNumeros() {
    int num = 0;
    //int num2 = 12;
    int prom = 0;

    printf("El prom es %d\n", prom);
}

// Cuerpo de la función
void promNumerosConParametros(int pnum1, int pnum2, int *pprom) {
    *pprom = (pnum1 + pnum2) / 2 + 4; // Sumar 4 al promedio

    printf("El prom es: %d\n", *pprom);
}

int promNumerosConParametrosYretorno(int pnum1, int pnum2) {
    int pprom = (pnum1 + pnum2) / 2 + 4; // Sumar 4 al promedio

    return pprom;
}

int main(int argc, char *argv[]) {
    int num1, num2, prom;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    promNumerosConParametros(num1, num2, &prom);
    prom = promNumerosConParametrosYretorno(num1, num2);

    printf("\nFuera de la funcion el prom es %d\n", prom);

    return 0;
}