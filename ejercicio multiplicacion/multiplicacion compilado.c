#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int num1 = 0;
 	int num2 = 0;
 	int multiplicacion = 0;
 	
 	
 	printf("Ingrese el Numero 1: ");
 	scanf("%d", &num1);
 	printf("Ingrese el Numero 2 : ");
 	scanf("%d", &num2);
 	
 	
 	multiplicacion = num1 * num2;
 	printf("La multiplicacion es %d \n\n", multiplicacion);
 	
 	if(multiplicacion>10)
	 {//Se ejecuta la condicion es verdadera 
 		printf("La multiplicacion es mayor a 10");
	 }
	 else 
	 {//Se ejecuta si la condicion es falsa 
	
 	printf("la multiplicacion no es mayor a 10\n");	
	 }
 	
	return 0;
}