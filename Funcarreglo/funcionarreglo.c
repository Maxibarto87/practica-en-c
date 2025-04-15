#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sumarArreglo (int parreglo[], int pcant )

{
	int suma = 0;
	for(int i=0; i<pcant; i++)
	{
		suma = suma + parreglo[i];
		
	}
	printf("La suma es: %d\n",suma);
	
	
}
int main(int argc, char *argv[]) 
{
	
	
	
	int arreglo []= {1,4,2,20};
	sumarArreglo(arreglo,4);
	
	
	
	
	return 0;
}