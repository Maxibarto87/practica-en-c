#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int num1=0, num2=0;
	int division=0;
	
	printf("ingrese el numero 1: ");
	scanf("%d", &num1);
	
	while (num2==0)
	{
		printf("ingrese el numero 2: ");
		scanf("%d", &num2);
	}
	
	division=num1/num2;
	printf("la division es %d",division);
	

	return 0;
}