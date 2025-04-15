#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	double nota1=0, nota2=0, nota3=0;
	double promedio=0;
	
	while (nota1<=0 || nota1>10)
	{
		printf("Ingrese la nota 1: ");
		scanf("%lf", &nota1);
	}
	
	while (nota2<=0 || nota2>10)
	{
		printf("ingrese la nota 2: ");
		scanf("%lf", &nota2);
	}	
	
	while (nota3<=0 || nota3>10)
	{
		printf("ingrese la nota 3: ");
		scanf("%lf", &nota3);
	}
	promedio=(nota1+nota2+nota3)/3;
	
	printf("el promedio es %lf", promedio);


	return 0;
}