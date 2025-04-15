#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mulNumeros ()
{
	int num1 = 4;
	int num2 = 5;
	int mul = 1;
	
	printf("La mul es %d",mul);
}
 //cuerpo de la funcion 
void mulNumerosConParametros(int pnum1, int pnum2, int pmul)
{
	pmul = pnum1 * pnum2;
	
	printf("La mul es: %d", pmul); 
}

//{     
	


//suma = num1 + num2; 

//printf("La suma es: %d",suma);


	
//}
int mulNumerosConParametrosYretorno(int pnum1,int pnum2, int pmul)
{
	while(prom > 10)
	{
		printf("El promedio es: ",prom);
		scanf("%")
	}
	
	return pmul;
}

	
int main(int argc, char *argv[])

{
	
	int num1 = 4;
	int num2 = 5;
	int mul = 0; 
	
	printf("Ingrese el numero 1: ");
	scanf("%d", &num1);
	printf("Ingrese el numero 2: ");
	scanf("%d", &num2);

	//sumaNumeros(num1,num2,suma);
	//mulNumerosConParametros(num1,num2,mul);
	mul = mulNumerosConParametrosYretorno(num1,num2,mul);
	
	printf("\n Fuera de la funcion la mul es %d",mul);
	
	return 0;
}