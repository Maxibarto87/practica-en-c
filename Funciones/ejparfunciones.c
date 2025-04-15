#include <stdio.h>
#include <stdlib.h>

void esPar(int numero); // Prototipo de la función

void esPar(int numero) 
{
    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }
}

int main(int argc, char *argv[]) 
{
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    esPar(num1);
    esPar(num2);

    return 0;
}