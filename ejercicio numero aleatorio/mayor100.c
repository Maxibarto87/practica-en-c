#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	//100 num mayor aleatorio
	
	int num = 0;
	int mayor = 0;
	
	srand (getpid());
	
	for(int i=1; i<100; i++)
	{
		num = rand ();
		printf("%d\n",num);
		if (num>mayor)
		{
			mayor = num;
		}
	}
	
	printf("El numero mayor es: %d", mayor);
	
	return 0;
}