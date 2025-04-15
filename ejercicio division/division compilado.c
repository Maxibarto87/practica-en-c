#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	double num1 = 0;
 	double num2 = 0;
 	double division = 0;
 	
 	
 	printf("Ingrese el Numero 1: ");
 	scanf("%lf", &num1);
 	printf("Ingrese el Numero 2:  ");
 	scanf("%lf", &num2);
 	if(num2 == 0)
 	{
 		printf("No se puede dividir por 0");
	}
	else
	{
		division = num1/num2;
		printf("La division es %lf \n\n", division);	
	}
 	
 	
 	
 	
 	
 	
 	
	 
	
	return 0;
}