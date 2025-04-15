#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int num = 0;
	int i = 0;
	
	
	while(i <=10)
	{
		printf("%d\n",num);
		num = num + 2;
		
		i++;
	}
	
	
	return 0;
}