#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num = 0;
	printf("Ingresar num: ");
	scanf("%d",&num);
	
	//contar(num);
	printf("%d \n",factorial(num));
	
	return 0 ;
}

	int factorial(int pnum)
	{
		if(pnum<=1)
		{
			return 1;
		}
		else 
	{
		return(pnum * factorial(pnum-1));
}
	
}