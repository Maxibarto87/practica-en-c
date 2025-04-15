#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num1=0;
	int num2=0; 
	int mul=0;
	int resto=0;
	
	printf("Ingrese el 1er num: ");
	scanf("%d",&num1);
	
	printf("Ingrese el 2do num: ");
	scanf("%d",&num2);
	
	
	mul = num1 * num2; 
	
	resto = mul %2;
	if(resto == 0)
	{
		printf("El num es: %d",mul);
	}
	else if(mul>8)
	{
		printf("El num es: %d", mul);
	}
	
	return 0;
}