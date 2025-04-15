#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//ejercicio promedio 

int main(int argc, char *argv[])
{
	
	double  num1 = 0;
	double  num2 = 0;
	double  num3 = 0;
	double promedio = 0; 
	
	printf("Ingrese el 1er Num1: ");
	scanf("%lf" ,&num1);
	
	printf("Ingrese el 2er Num1: ");
	scanf("%lf" ,&num2);
	
	printf("Ingrese el 3er Num1: ");
	scanf("%lf" ,&num3);
	
	promedio = (num1 + num2 + num3 )/3;
	printf("El promedio es: %.2lf", promedio);
	
	
	return 0;
}