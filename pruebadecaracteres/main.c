#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	
	char palabra [100];
	
	
	scanf ("%[^\n]", palabra);
	
	strcpy(palabra, "maxi");
	printf("%s", palabra);

	if(strcmp(palabra,"maxi")==0)
	{
		printf("Es maxi,maxi,maxi");
	}
	
	return 0;
}