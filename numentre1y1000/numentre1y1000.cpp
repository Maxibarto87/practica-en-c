#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	double num1 = 0;
	double  numeros = 0;
	
	printf ("Ingrese un numero: ");
	scanf("%lf", &num1);
	
	if(num1>=0 && num1<=10)
	{
		printf("El numero es de un digito");
	}
	else
	{
		if(num1>=10 && num1<=100)
		{
			printf("El numero es de dos digitos");
		}
		else
		{
			if(num1>=100 && num1<=1000)
			{
				printf("El numero es de tres digitos ");
			}
			else 
			{
				if(num1>1000)
			{
				printf("El numero no tiene que superar a mil");
			}
			}
	  
	    }
	}
	return 0;
}