#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//int arreglo[] ={0,2,8,5};
	
	int num = 0;
	double suma = 0;
	double prom = 0;
	int mayor = 0;
	int menor = 0;
	int arreglo2[4];
	int resta = 0;
	
	arreglo2[6];
	
	for(int i=0;i<4;i++)
	
	{
		scanf("%d",& arreglo2[i]);
		
	}
	printf("\n Finalizo la carga del arreglo: \n");
	
	
	for(int i=0;i<4;i++) //Imprime los componentes
	{
		printf("%d |",arreglo2[i]);
	 } 
	//for(int i=0;i<4;i++)
	//{
	//	suma = suma+arreglo2[i]; //esto suma los componetes
	//}
	//printf("\n La suma es: %lf" ,suma );

	
	
	//promedio 
	
	//	prom = suma/4;
	
	//printf("\n El promedio es: %lf",prom);
	
	//Resta
	
	for(int i=1;i<4;i++)
	{
		resta = resta - arreglo2[i];
		
	}
	
	printf("\n La resta es: %d",resta);
	
	
	return 0;
}