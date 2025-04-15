#include <stdio.h>
#include <stdlib.h>

void mayorArreglo(int parreglo[], int pcant) {
    int mayor = parreglo[0]; // Inicializar con el primer elemento del arreglo

    for(int i = 1; i < pcant; i++) {
        if(parreglo[i] > mayor) {
            mayor = parreglo[i];
        }
    }
    printf("\nEl componente mayor es: %d\n", mayor);
}

int main(int argc, char *argv[]) {
    int arreglo[] = {1, 4, 2, 20}; // Inicialización correcta del arreglo
    int pcant = sizeof(arreglo) / sizeof(arreglo[0]); // Calcular el tamaño del arreglo

    mayorArreglo(arreglo, pcant);

    return 0;
}