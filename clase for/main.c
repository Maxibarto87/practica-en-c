#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num = 0;
	int suma = 0;
	
	double prom =0;
	
	for(int i=0; i<3; i++)
	{
		//num=num +1;
		//printf("%d\n", num);
		
		scanf("%d", &num);
		suma = suma + num;
	
	}
	prom =suma/3;
	printf ("La promedio es: %lf", prom);
	
	
	return 0;
}