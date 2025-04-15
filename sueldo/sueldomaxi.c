#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	char nom = 0;
	char cat = 0;
	double ant = 0;
	double sueldo = 0;
	double sa = 0;
	double afip = 0;
	double safip = 0;
	double sb = 0;
	
	printf("Ingrese el nombre: ");
	scanf("%s" , &nom);
	
	printf("Ingrese la categoria: ");
	scanf("%s" , &cat);
	if (cat == 80000)
	{
		printf("El sueldo es de la categoria uno es de: ");
	}
	else 
	{
		if (cat == 600000)
		{
			printf("El sueldo de la categoria dos es de:");
		}
		else if (cat == 55000)
		{
			printf("El sueldo de la categoria tres es de: ");
		}
	}
	
	sa = (sueldo * 5/100) * ant;
	if (sb > 300000); 
	{
		printf("Sueldo bruto: ");
	}
	
	printf("El sueldo + la antiguedad es de: ");
	scanf("%lf" ,&sueldo);
	
	afip = sb * 2/100;
	printf ("El descuento de la afip sobre el suedo bruto es de: ");
	scanf("%lf", &afip);
	
	safip = sb - afip;
	printf("El sueldo afip es de: ");
	scanf("%lf", &safip);
	

	
	
	
	
	
	
	
	
	
	
	

	
	return 0;
}