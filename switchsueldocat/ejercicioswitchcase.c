#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	int cat = 0;
	double categoria = 0;
	double sueldo = 0;
	
	
	
	printf("Ingrese la categoria: ");
	scanf("%d", &cat);
	printf("Ingrese el sueldo: ");
	scanf("%lf", &sueldo);
	
	switch (cat)
	{
		case 1: 
	
		sueldo = sueldo *2;
		printf("El sueldo es de:%lf ", sueldo);
		break;
		case 2:
		
		sueldo = sueldo + (sueldo * 15/100);
		printf("El sueldo mas el quince porciento es de: %lf", sueldo);
	    break;
	    
	    case 3:
	    
	    sueldo = sueldo - 10/100;
	    printf("El sueldo menos el diez porciento es de: %lf ", sueldo);
	    break;
	    
	    case 4:
		
		sueldo = sueldo / 4;
		printf("El sueldo dividido cuantro es de: %lf", sueldo);
		break;
		
		case 5:
		
		printf("sueldo: %lf" , sueldo);
		break;
		
		default:
		printf("No hacer nada");
		break;
		
		
	}
	
	
	return 0;
}