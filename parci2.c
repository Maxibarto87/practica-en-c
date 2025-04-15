#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num = 0;
	int sum = 0;
	
	for(int i=0;i<4;i++)
	{
		printf("Ingrese un num: ");
		scanf("%d",&num);
		sum = sum + num;
		
	}
	printf("La suma es: %d",sum);
	return 0;
}