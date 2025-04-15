#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void holamundo(); // Prototipado
void holamundo() {
    printf("Hola Mundo\n");
}

void sumarNumeros() {
    int num1 = 2;
    int num2 = 12;
    int suma = 0;

    printf("La suma es %d\n", suma);
}

// Cuerpo de la función
void sumarNumerosConParametros(int pnum1, int pnum2, int psuma) {
    psuma = pnum1 + pnum2;

    printf("La suma es: %d\n", psuma);
}

int sumarNumerosConParametrosYretorno(int pnum1, int pnum2) {
    int psuma = pnum1 + pnum2;

    return psuma;
}

int main(int argc, char *argv[]) {
    int num1, num2, suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    sumarNumerosConParametros(num1, num2, suma);
    suma = sumarNumerosConParametrosYretorno(num1, num2);

    printf("\nFuera de la funcion la suma es %d\n", suma);

    return 0;
}
