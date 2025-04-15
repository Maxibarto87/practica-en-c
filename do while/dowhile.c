#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num = 0;
	
	do 
	{
		printf("Ingrese un numero mayor a 10: ");
		scanf("%d", &num);	
	}
	
	
	while (num < 10);
	printf("El numero que ingreso es mayor a 10");
	
	
	
	
	return 0;
}