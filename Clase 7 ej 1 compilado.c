#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int num=0;
	int contador=1;
	
	while (contador<=1000)
		
	{
		num = num+100;
		printf("%d\n", num);
		//printf("el contador es: %d\n", num);
		contador = contador+1;
	}








	return 0;
}