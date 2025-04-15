#include <stdio.h>

int main() {
    int arregloA[4];
    int arregloB[4];
    int arregloC[4];
    int arregloD[4];
    int suma = 0;
    float promedio = 0;
    int mayor = -999;
    int menor = 999;

    // GENERAR A
    for (int i = 0; i < 4; i++) {
        printf("Ingresar componente %d para A: ", i + 1);
        scanf("%d", &arregloA[i]);
    }

    // GENERAR B
    for (int i = 0; i < 4; i++) {
        printf("Ingresar componente %d para B: ", i + 1);
        scanf("%d", &arregloB[i]);
    }

    // GENERAR C
    for (int i = 0; i < 4; i++) {
        arregloC[i] = arregloA[i] + arregloB[i];
    }

    // GENERAR D
    int pos = 3;
    for (int i = 0; i < 4; i++) {
        arregloD[i] = arregloA[i] * arregloB[pos];
        pos--;
    }

    // SUMAR COMPONENTES DEL VECTOR A
    for (int i = 0; i < 4; i++) {
        suma += arregloA[i];
    }

    // OBTENER COMPONENTE MAYOR
    for (int i = 0; i < 4; i++) {
        if (arregloA[i] > mayor) {
            mayor = arregloA[i];
        }
    }
    printf("El componente mayor es: %d\n", mayor);

    // OBTENER COMPONENTE MENOR
    for (int i = 0; i < 4; i++) {
        if (arregloA[i] < menor) {
            menor = arregloA[i];
        }
    }
    printf("El componente menor es: %d\n", menor);

    // IMPRIMIR TODOS LOS COMPONENTES DEL VECTOR A
    printf("Componentes del vector A: ");
    for (int i = 0; i < 4; i++) {
        printf("%d|", arregloA[i]);
    }
    printf("\n");

    // IMPRIMIR COMPONENTES DE ATRÁS PARA ADELANTE DEL VECTOR C
    printf("Vector C de atrás para adelante: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d|", arregloC[i]);
    }
    printf("\n");

    // IMPRIMIR EL TAMAÑO DEL ARREGLO
    int tamanioVector = sizeof(arregloA) / sizeof(arregloA[0]);
    printf("El tamaño del arreglo A es: %d\n", tamanioVector);

    return 0;
}