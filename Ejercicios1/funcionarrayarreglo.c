#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Necesario para getpid()

void imprimirVector(int pvector[], int pcant);
int sumarComponentesVector(int pvector[], int pcant);
int obtenerComponenteMayor(int pvector[], int pcant);

// Programa principal 
int main(int argc, char *argv[]) 
{
	int vector[4];
	srand(getpid()); // Generar números diferentes usando el número de proceso del sistema operativo
	
	// Rellenar el vector con números aleatorios entre 0 y 50
	for (int i = 0; i < 4; i++) {
		vector[i] = rand() % 51;
	}
	
	int n = sizeof(vector) / sizeof(vector[0]); // Obtener el tamaño del vector
	
	imprimirVector(vector, n);
	printf("\nLa suma de los componentes es %d\n", sumarComponentesVector(vector, n));
	printf("Tamaño del vector: %d\n", n);
	printf("El componente mayor es %d\n", obtenerComponenteMayor(vector, n));
	
	return 0;
}

// Función para imprimir el vector
void imprimirVector(int pvector[], int pcant)
{
	for (int i = 0; i < pcant; i++) {
		printf("%d|", pvector[i]);
	}
	printf("\n");
}

// Función para sumar los componentes del vector
int sumarComponentesVector(int pvector[], int pcant)
{
	int suma = 0;
	for (int i = 0; i < pcant; i++) {
		suma += pvector[i];
	}
	return suma;
}

// Función para encontrar el componente mayor en el vector
int obtenerComponenteMayor(int pvector[], int pcant)
{
	int mayor = pvector[0];
	for (int i = 1; i < pcant; i++) {
		if (pvector[i] > mayor) {
			mayor = pvector[i];
		}
	}
	return mayor;
}