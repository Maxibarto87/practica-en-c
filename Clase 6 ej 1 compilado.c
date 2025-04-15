#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

double sueldo=0;
int categoria=0;
double sueldo_bruto=0;

printf("ingrese el sueldo: ");
scanf("%lf",& sueldo_bruto);

printf("ingrese la categoria: ");
scanf("%d",& categoria);

switch(categoria)
{
	case 1:
		sueldo=sueldo_bruto*2;
		printf("el sueldo es %lf \n la categoria es 1", sueldo);
		
	break;
	
	case 2:
		sueldo=sueldo_bruto*1.15;
		printf("el sueldo es %lf \n la categoria es 2", sueldo);
		
	break;
	
	case 3:
		sueldo=sueldo_bruto*0.9;
		printf("el sueldo es %lf \n la categoria es 3", sueldo);
		
	break;
	
	case 4:
		sueldo=sueldo_bruto/4;
		printf("el sueldo es %lf \n la categoria es 4", sueldo);
		
	break;
	
	case 5:
		printf("el sueldo es %lf", sueldo_bruto);
	
	break;
	
	default:
	printf("no hacer nada");
	
	break;	
}


	return 0;
}