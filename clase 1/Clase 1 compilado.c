#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
     // Declaración de variables
    int edad = 0;
    char nombre[50]; // Asigna un tamaño al arreglo para almacenar cadenas de texto
    double altura = 0;

    // Solicitar datos al usuario
    printf("Ingrese su nombre:\n");
    scanf("%s", nombre); // No es necesario usar '&' con arreglos de caracteres

    printf("Ingrese su edad:\n");
    scanf("%d", &edad);

    printf("Ingrese su altura:\n");
    scanf("%lf", &altura);

    // Imprimir los datos ingresados
    printf("Mi nombre es %s, mi edad es %d, mi altura es %.2lf\n", nombre, edad, altura);

    return 0;
}