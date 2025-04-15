#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	int num = 0;
	int nota = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	if(num == 10)
	{
		printf("La letra es la A");
	}
	else 
	{
		if(num>=8 && num<=9)
		{
			printf("La letra es la B");
		}
		else if(num == 7)
		{
			printf("La letra es C");
		}
		else if(num  <7)
		{
			
			printf("La letra es la  D");
			
		}
			
		
	}
	
	return 0;
}