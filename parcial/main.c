#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num1;
	int num2;
	
	int mult = 0;
	int resto = 0;
	
	printf("Ingrese el 1er num: ");
	scanf("%d", &num1);
	
	printf("Ingrese el 2do num: ");
	scanf("%d", &num2);
	
	
	
	mult = num1*num2;
	
	//printf("Los numeros multiplicados es: %d\n", mult);
	
	resto = mult % 2;
	if(resto == 0)
	{
		printf("El numero es: %d\n", mult);
	}
	else if(mult >8)
	{
		printf("El numero es: %d\n",mult);	
	}
	return 0;
}