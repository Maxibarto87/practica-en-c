#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1 = 0;
	int num2 = 0;
	int mayor = 0;
	int menor = 0;
	
	printf ("Ingrese el num1: ");
	scanf("%d" , &num1);
	
	printf ("Ingrese el num2: ");
	scanf("%d" , &num2);
	
	if (num1 > num2) {
		mayor = num1;
		menor = num2;
		
	}
	else 
	{
		mayor = num2;
		menor = num1;
		
	}
	printf ("El numero mayor es:  %d ", mayor);
	printf ("El numero menor es:  %d ", menor);
	
	
	return 0;
}