#include <stdio.h>
#include <stdlib.h>

void menorArreglo(int parreglo[], int pcant) {
    int menor = parreglo[0]; // Inicializar con el primer elemento del arreglo

    for(int i = 1; i < pcant; i++) {
        if(parreglo[i] < menor) {
            menor = parreglo[i];
        }
    }
    printf("\nEl componente menor es: %d\n", menor);
}

int main(int argc, char *argv[]) {
    int arreglo[] = {23, 4, 2, 20}; // Inicialización correcta del arreglo
    int pcant = sizeof(arreglo) / sizeof(arreglo[0]); // Calcular el tamaño del arreglo

    menorArreglo(arreglo, pcant);

    return 0;
}