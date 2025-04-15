#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	int lado4 = 0;
	int perimetro = 0;
	
	printf("Ingese el lado1: ");
	scanf("%d", &lado1);
	
	printf("Ingese el lado2: ");
	scanf("%d", &lado2);
	
	printf("Ingese el lado3: ");
	scanf("%d", &lado3);
	
	
	printf("Ingese el lado4: ");
	scanf("%d", &lado4);
	
	perimetro = (lado1 + lado2 + lado3 + lado4);
	printf("el perimetro es de: %d", perimetro);
	
	
	return 0;
}