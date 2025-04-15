#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//producto
	int num =0;
	int producto = 1;
	srand (getpid());
	
	for (int i=1; i<10; i++)
	{
		num = rand () % 10 +1;
		printf("%d\n", num);
		producto = producto * num;
		
		
		
	}
	
	printf("El producto es: %d",producto);
	
	return 0;
}