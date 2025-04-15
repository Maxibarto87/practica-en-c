#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int matriz[3][3];
    int suma = 0;
    float prom = 0.0; // Cambié a float para obtener un promedio decimal
    int totalElementos = 9; // Total de elementos en una matriz 3x3
    
    printf("Ingresa los elementos de la matriz de 3x3:\n");
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3; c++)
        {
            printf("Ingresa el elemento en la posicion [%d][%d]: ", f, c);
            scanf("%d", &matriz[f][c]);
        }
    }
    
    // Imprimir matriz
    printf("\nLa matriz ingresada es:\n");
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3; c++)
        {
            printf("|%d\t", matriz[f][c]);
        }
        printf("\n_______________\n");
    }
    
    // Sumar componentes matriz
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3; c++)
        {
            suma += matriz[f][c];
        }
    }
    printf("La suma de todos los componentes es: %d\n", suma);
    
    // Calcular el promedio
    prom = (float)suma / totalElementos; // Calcula el promedio
    printf("El promedio de todos los componentes es: %.2f\n", prom); // Imprime el promedio con dos decimales
    
    return 0;
}