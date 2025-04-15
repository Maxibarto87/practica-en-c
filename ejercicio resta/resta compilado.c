#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num1 = 0;
 	int num2 = 0;
 	int resta = 0;
 	
 	
 	printf("Ingrese el Numero 1: ");
 	scanf("%d", &num1);
 	printf("Ingrese el Numero 2 : ");
 	scanf("%d", &num2);
 	
 	
 	resta = num1 - num2;
 	printf("La resta es %d \n\n", resta);
 	
 	if(resta>10)
	 {//Se ejecuta la condicion es verdadera 
 		printf("La resta es mayor a 10");
	 }
	 else 
	 {//Se ejecuta si la condicion es falsa 
	 	printf("la resta no es mayor a 10\n");	
	 }
	return 0;
}