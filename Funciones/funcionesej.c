#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void restaNumeros ()
{
	int num1 = 2;
	int num2 = 12;
	int resta = 0;
	int ingresarNumero = 0;
	
	printf("La resta es %d",resta);
}
 //cuerpo de la funcion 
void restaNumerosConParametros(int pnum1, int pnum2, int presta)
{
	presta = pnum1 - pnum2;
	
	printf("La resta es: %d", presta); 
}

//{     
	


//suma = num1 + num2; 

//printf("La suma es: %d",suma);


	
//}
int restaNumerosConParametrosYretorno(int pnum1,int pnum2, int presta)
{
	presta = pnum1 - pnum2;
	
	return presta;
}

	
	
int main(int argc, char *argv[])

{
	
	int num1 = 15;
	int num2 = 5;
	int resta = 0;
	
	
	
	//sumaNumeros(num1,num2,suma);
	restaNumerosConParametros(num1,num2,resta);
	resta = restaNumerosConParametrosYretorno(num1,num2,resta);
	
	printf("\n Fuera de la funcion la resta es %d",resta);
	
	return 0;
}