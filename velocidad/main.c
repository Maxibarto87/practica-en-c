#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	double km = 0;
    double vel = 0;

    printf("Ingrese la distancia en kilómetros: ");
    scanf("%lf", &km);

    vel = km * (5.0 / 18.0); // Conversión de km/h a m/s

    printf("La velocidad en metros por segundo es: %lf\n", vel);

    return 0;
	
	
	
}