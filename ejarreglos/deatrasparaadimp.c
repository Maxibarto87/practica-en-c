#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

{  //imprimir de atras para adelante 


	int vector[4];
	int resta=0;
	
	printf("Ingrese el los numeros del componente: \n");
	
	
	for (int i = 0;i<4;i++)
	{
		scanf("%d",& vector[i]);
	}
	for (int i =0; i<4; i++)
	{
		printf("%d |",vector[i]);
	}
	
		resta = vector[0];
		for (int i=1; i<4;i++)
		{
			resta = resta-vector[i];
			{
				resta = resta-vector[1];
				
			}
			printf ("\n la resta es: %d \n",resta);
		}
	
	for (int i =3; i >=0; i--)
	{
		printf("%d |",vector[i]);
	}
	
	return 0;
}