#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void holamundo ();
                  //prototipado
void holamundo()
{
	
}
void sumarNumeros ()
{
	int num1 = 2;
	int num2 = 12;
	int suma = 0;
	
	printf("La suma es %d",suma);
}
 //cuerpo de la funcion 
void sumarNumerosConParametros(int pnum1, int pnum2, int psuma)
{
	psuma = pnum1 + pnum2;
	
	printf("La suma es: %d", psuma); 
}

//{     
	


//suma = num1 + num2; 

//printf("La suma es: %d",suma);


	
//}
int sumarNumerosConParametrosYretorno(int pnum1,int pnum2, int psuma)
{
	psuma = pnum1 + pnum2;
	
	return psuma;
}

	
int main(int argc, char *argv[])

{
	
	int num1 = 2;
	int num2 = 12;
	int suma = 0; 
	
	//sumaNumeros(num1,num2,suma);
	sumarNumerosConParametros(num1,num2,suma);
	
	suma = sumarNumerosConParametrosYretorno(num1,num2,suma);
	
	printf("\n Fuera de la funcion la suma es %d",suma);
	
	return 0;
}
