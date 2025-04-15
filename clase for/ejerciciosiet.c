#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	int inicio= 0;
	int fin =0;
	int resto = 0;
	int contador = 0;
	
	printf("Numero inicio: ");
	scanf("%d", &inicio);
	
	printf("Numero fin: ");
	scanf("%d", &fin);
	
	
	while(inicio <= fin)
	{
		resto = inicio % 2;
		if (resto == 0)
		{
			contador ++;
			printf("%d \n",inicio);
		}
		
		
	inicio++;		
	 
	} 
	
	printf("La cantidad de pares es: %d\n",contador);
	
	
	
	
	return 0;
	
	
}