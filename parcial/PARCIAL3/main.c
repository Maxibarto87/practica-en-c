#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimirComp(int p[])
{
	for(int i = 0;i <3;i++)
	{
		if(p[i]>0)
		{
			printf("%d|",p[i]);
		}
	}

}
int compMenor (int p[])
{
	int pmenor = 999;
	for(int i = 0; i < 3; i++)
	{
		if(pmenor>p[i])
		{
			pmenor=p[i];
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