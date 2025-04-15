#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	//Cuadrado 
	
	int i, j, lado;
	
	printf("Ingrese el tamaño del lado del cuadrado: ");
	scanf("%d",&lado);
	
	for (i = 1; i<= lado; i++)
	{
		for(j = 1; j <= lado; j++)
		{
			printf("E");
		}
		printf("\n");
	}
	
	return 0;
}