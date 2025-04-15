#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    double nota1 = 0;
    double nota2 = 0;
    double nota3 = 0;
    double promedio = 0;

    // Validar nota 1
    do {
        printf("Ingrese nota 1 (entre 1 y 10): ");
        scanf("%lf", &nota1);	
    } while(nota1 <= 0 || nota1 > 10);

    // Validar nota 2
    do {
        printf("Ingrese nota 2 (entre 1 y 10): ");
        scanf("%lf", &nota2);	
    } while(nota2 <= 0 || nota2 > 10);

    // Validar nota 3
    do {
        printf("Ingrese nota 3 (entre 1 y 10): ");
        scanf("%lf", &nota3);
    } while(nota3 <= 0 || nota3 > 10);

    // Calcular el promedio
    promedio = (nota1 + nota2 + nota3) / 3.0;

    // Mostrar el resultado
    printf("El alumno tiene como promedio: %.2lf\n", promedio);

    // Evaluar si aprobó o no
    if (promedio >= 6) {
        printf("El alumno esta APROBADO.\n");
    } else {
        printf("El alumno esta DESAPROBADO.\n");
    }

    return 0;
}