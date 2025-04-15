#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	char producto = 0;
	double precio = 0;
	double iva = 0;
	double total = 0;
	
	
	printf("Ingrese el nombre del producto: "); 
	scanf("%s", &producto);
	
	printf("Ingrese el precio: ");
	scanf("%lf", &precio);
	
	iva = precio * 0.21;
	total = precio + iva; 
	printf("El precio es: %lf", total);
	
	
	return 0;
}