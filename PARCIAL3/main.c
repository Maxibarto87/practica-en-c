#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimirComp(int pvector[])
{
	for(int i = 0;i <3;i++)
	{
		if(pvector[i]>0)
		{
			printf("%d|",pvector[i]);
		}
	}

}
int compMenor (int pvector[])
{
	int pmenor = 999;
	for(int i = 0; i < 3; i++)
	{
		if(pmenor>pvector[i])
		{
			pmenor=pvector[i];
		}
	}
	return pmenor;
}
int main(int argc, char *argv[]) 
{
	
	int vector[]={4,3,-6};
	int menor = 999;
	for (int i = 0;i < 3; i++)
	{
		printf("%d|", vector[i]);
	}
	menor = compMenor(vector);
	printf("\nEl menor es: %d\n",menor);
	imprimirComp(vector);
	
	
	
	return 0;
}