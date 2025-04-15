#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	// Declaración de variables 
	int edad = 0;
	char nombre[20] = "";
	double altura = 0.0;

	// Pedir edad
	printf("Ingrese su edad:\n");
	scanf("%d", &edad);

	// Pedir nombre
	printf("Ingrese su nombre:\n");
	scanf("%19s", nombre);  // Corrige el formato y limita la entrada a 19 caracteres para evitar desbordamiento

	// Pedir altura
	printf("Ingrese su altura:\n");
	scanf("%lf", &altura);

	// Imprimir los datos ingresados
	printf("\nUsted tiene %d anios, se llama %s y mide %.2lf\n", edad, nombre, altura);

	return 0;
}