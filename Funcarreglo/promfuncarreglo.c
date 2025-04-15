#include <stdio.h>
#include <stdlib.h>

void holamundo() {
    printf("Hola Mundo\n");
}

void promNumerosConParametros(int pnum1, int pnum2, float *pprom) {
    float suma = pnum1 + pnum2; // Sumar los números
    *pprom = suma / 2; // Calcular el promedio
}

float promNumerosConParametrosYretorno(int pnum1, int pnum2) {
    return (pnum1 + pnum2) / 2.0; // Retornar el promedio
}

int main(int argc, char *argv[]) {
    int num1, num2;
    float prom;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Usando la función que modifica el promedio mediante puntero
    promNumerosConParametros(num1, num2, &prom); 

    // Alternativamente, usando la función que retorna el promedio
    // prom = promNumerosConParametrosYretorno(num1, num2);

    printf("\nEl promedio es: %.2f\n", prom);

    return 0;
}