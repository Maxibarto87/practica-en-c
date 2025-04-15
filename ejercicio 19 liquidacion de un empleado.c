#include <stdio.h>
#include <stdlib.h>

/* 19) algoritmo para la liquidacion de un empleado : donde se ingrese el nombre, la categoria y la antiguedad en años.
 Si es categoria 1 cobrara de max 80mil, si es categoria 2 cobrará 600mil y si es categoria 3 cobrara 55mil.
 la antiguedad se computara un 5% del basico por cada año trabajado . si el sueldo bruto es mayor a 3 millones la afip retendra un 2%   
*/

int main(int argc, char *argv[]) 
{
	
char nombre [20] = "" ;
int categoria = 0 ;
int antiguedad= 0;
int sueldo_bruto= 0;
int sueldo_afip= 0;

printf("ingrese su nombre:\n");
 scanf("%s",&nombre);
 
printf("ingrese la categoria de la persona 1, 2 o 3: ");
 scanf("%d",& categoria);
 
printf("ingrese la antiguedad del trabajo : ");
scanf("%d",& antiguedad);

 
if (1)
{
sueldo_bruto = ((80000 * 12) * (antiguedad +.5)); 
printf ("su sueldo bruto es : %d \n", sueldo_bruto); 
}
else if (2)
{
sueldo_bruto = ((600000 * 12) * (antiguedad + .5)); 
printf ("su sueldo bruto es : %d \n", sueldo_bruto); 
}
else if (3)
{
sueldo_bruto = ((55000 * 12) * (antiguedad + .5)); 
printf ("su sueldo bruto es : %d \n", sueldo_bruto); 
}
     else if (sueldo_bruto>3000000)
    {
    sueldo_afip = (sueldo_bruto - .2 );
    printf ("tu sueldo sera : %d", sueldo_afip);
    } 
	return 0;
}