#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int i = 0;
 	int num = 0;
	int menor = 0;
	
	srand (getpid());
	
	for(int i=1; i<80; i++)
	{
		num = rand ();
		printf("%d\n",num);
		if (num>menor)
		{
			menor = num;
		}
	}
	
	printf("El numero mayor es: %d", menor);
 	
	return 0;
}