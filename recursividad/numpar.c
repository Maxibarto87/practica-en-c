#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Programa principal 
int main(int argc, char *argv[]) 
{
	
	
	
		
		int num = 0;
		
		printf("Ingresar numero: \n");
		scanf("%d", &num);
	
	
	contar(num);
	
	return 0;
}

//Funcion 

void contar (int pnum)
{
	if(pnum > 0)
	{
		printf("%d \n", pnum);
		contar(pnum -1);
	}
	
}