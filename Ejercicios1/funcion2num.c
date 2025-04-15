#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



	
	int sumarNumeros(int pnum1,int pnum2);
	int multiplicarNumeros(int pnum1, int pnum2);	
	double dividirNumeros(pnum1, pnum2);
	int restarNumeros(pnum1,pnum2);
	void imprimirResultados(int psuma, int pmult,double pdi, int presta);
	//Programa Principal
int main(int argc, char *argv[]) 
{
	int num1, num2;
	
	printf("Ingrese numero 1: \n");
	scanf("%d",&num1);
	printf("Ingrese numero 2: \n");
	scanf("%d",&num2);
	
	int suma = sumarNumeros(num1,num2);
	int mult = multiplicarNumeros(num1, num2);
	double div = dividirNumeros(num1, num2);
	int resta = restarNumeros(num1, num2);
	
	imprimirResultados(suma,mult,div,resta);
	 
return 0;	
}

//Funciones

int sumarNumeros(int pnum1, int pnum2)
{
	int suma = 0;
	suma = pnum1 + pnum2;
	//printf("La suma es: %d\n",suma);
	
	return suma;
}
int multiplicarNumeros(int pnum1, int pnum2)
{
		int mult = 0;
		mult = pnum1 * pnum2;
		//printf("La mult es: %d\n",mult);
		
		return mult;
	
}
	
double dividirNumeros(int pnum1, int pnum2)
{
	if(pnum2 ==0)//Para validar que no de error la division 
		{
			printf("Error, no se puede dividir por 0");
			return 0;
		}
		double div = 0;
		div = (double)pnum1/pnum2;
		
		//printf("La div es: %d\n",div);
		return div;
}
	
int restarNumeros(pnum1,pnum2)
{
		int resta = 0;
		resta = pnum1 - pnum2;
		//printf("La resta es: %d\n",resta);
		
		return resta;
	
}
	
	void imprimirResultados(int psuma, int pmult,double pdiv,int presta)
	{
		printf("La suma es: %d\n",psuma);
		printf("La mult es: %d\n",pmult);
		printf("La division es: %lf\n",pdiv);
		printf("La resta es: %d\n",presta);
		
	}

