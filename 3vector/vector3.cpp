#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
#include <stdio.h>

{
    int arregloA[4];
    int arregloB[4];
    int arregloC[4];
    int arregloD[4];
    
    // Generar A
    printf("Generar vector A: \n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arregloA[i]);
    }
    printf("Arreglo A: ");
    for(int i = 0; i < 4; i++) {
        printf("%d |", arregloA[i]);
    }
    printf("\n");
    
    // Generar B
    printf("Generar vector B: \n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arregloB[i]);
    }
    printf("Arreglo B: ");
    for(int i = 0; i < 4; i++) {
        printf("%d |", arregloB[i]);
    }
    printf("\n");
    
    // Generar C
    for(int i = 0; i < 4; i++) {
        arregloC[i] = arregloA[i] + arregloB[i];
    }
    printf("Arreglo C (Suma): ");
    for(int i = 0; i < 4; i++) {
        printf("%d |", arregloC[i]);
    }
    printf("\n");
    
    // Generar D
    for(int i = 0, j = 3; i < 4; i++, j--) {
        arregloD[i] = arregloA[i] * arregloB[j];
    }
    printf("Arreglo D (Multiplicación): ");
    for(int i = 0; i < 4; i++) {
        printf("%d |", arregloD[i]);
    }
    printf("\n");
    
    return 0;
}