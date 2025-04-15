#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{

	int repuesta;
	
	do 
	
	{
		printf("Seleccionar una opcion numerica \n\n");
		printf("\t1 .Ejecutar la calculadora \n\n");
		printf("\t2 .Ejecutar bloc de notas \n\n");
		
		scanf("%d", &repuesta);
		
		switch(repuesta)
		{
			
			   case 1:
		{
			
			
			
			printf("Abriendo calculadora ");
				system("calc");
			break;
			
		}
			case 2:
		{
			printf("Abriendo bloc de notas");
				system("notepad");
			break;
		}
		
		}
	    
		
		
		
	}
	  
	while(repuesta !=1 && repuesta !=2);
	
	return 0;
}