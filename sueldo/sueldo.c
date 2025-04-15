#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	char nom = 0;
	int cat = 0;
	double ant = 0;
	double sueldo = 0;
	double sa = 0;
	double afip = 0;
	double safip = 0;
	double sb = 0;
	
	
	
	printf("Ingrese el nombre: ");
	scanf("%s" , &nom);
	
	printf("Ingrese la categoria: ");
	scanf("%d" , &cat);
	
	printf("Ingrese la antiguedad: ");
	scanf("%d", &ant);
	
	if (cat == 1 ) 
	{
		(sueldo = 80000);
	}
	else if(cat == 2)
	{
		(sueldo = 6000);
	}
	else if(cat == 3 ) 
	{
		(sueldo = 55000);
	}
	.
	
	sa = (sueldo * 5/100) * ant;
	if  (sb > 300000 )
	{
		printf("El Sueldo es: %lf", sa);
	}
	else 
	{
	    printf("Error de categoria");	
	}
	
	
	if ()
	afip = sb * 2/100;
		
	safip = sb - afip;
	printf("El sueldo afip es de: ");
	
	


	
	return 0;
}