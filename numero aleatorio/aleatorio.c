#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int numero = 0;
	int suma = 0;
	int cantnum = 0;
	srand(getpid());
	
	printf("cantidad de numero queres generar? \n");
	scanf("%d", &cantnum);
	
	for(int i=0; i<cantnum;i++)
	{
		numero = rand () %11;// poner numero mas 

	printf("%d\n", numero);
	//suma = suma + numero;
	//cantnum = cantnum + 20;
	
	
	
	
	}
	return 0;
//	printf("La suma es: %d\n",suma);
	
}