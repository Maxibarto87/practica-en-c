#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
    int mayor;              // Variable para almacenar el número mayor
    int arreglo2[4] = {3, 7, 1, 8};  // Ejemplo de arreglo con 4 números, puedes modificar estos valores

    mayor = arreglo2[0];  // Inicializa 'mayor' con el primer elemento del arreglo

    // Recorre el arreglo a partir del segundo elemento
    for(int i = 1; i < 4; i++) {
        if (arreglo2[i] > mayor) {
            mayor = arreglo2[i];  // Actualiza 'mayor' si se encuentra un valor mayor
        }
    }

    printf("\nEl número mayor es: %d\n", mayor);
    return 0;
}
