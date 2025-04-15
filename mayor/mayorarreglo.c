#include <stdio.h>
#include <stdlib.h>





int main() {
    int num = 0;             
    int arreglo2[4]; 
    int mayor = -999;
    int menor = 999;
    
	for(int i = 1; i < 4;i++)
	{
		scanf("%d", &arreglo2[i]);
	}
    printf("\n finalizo la carga del arreglo: \n");
    
    
    for(int i = 1; i < 4; i++)
	{
		if(arreglo2[i]>mayor)
		{
			mayor=arreglo2[i];
		}
		if(arreglo2[i]<menor)
		{
			menor=arreglo2[i];
		}
	}
	printf("\n El componente mayor es: %d", mayor);
	printf("\n El componente menor es: %d", menor);
	
	
	
    
    return 0;
}
