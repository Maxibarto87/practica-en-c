#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int arreglo[]={4,3,-6};
	int menor = 999;
	for(int i = 0;i <3; i++)
	{
		if(menor < arreglo[i])
		{
			menor = arreglo[i]; 
		}
		for(int i = 0;i<3;i++)
		{
			if(menor > 0)
			{
				menor = arreglo[i];
				
			}
		printf("El menor es: %d\n",menor);	
		}
		
	}
	
	return 0;
}