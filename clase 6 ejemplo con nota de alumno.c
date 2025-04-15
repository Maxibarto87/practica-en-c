#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {

int num1=0; 

printf ("ingrese el num1: ");
scanf ("%d", &num1);
 
   while ( num1==10) 
 { 
    printf ("tu nota es a");
 }
 
    while ((num1==8)||(num1==9))
 {
	 printf ("tu nota es b");
 }    

	while (num1==7 )
 {
     printf ("tu nota es c");
 }    

    while ((num1>=0) && (num1<=7))
 {
     printf ("tu nota es d");
 }

   while ((num1<0)||(num1>10))
 {
    printf ("no es posible ingresar numero menor a 0, ni mayor a 10");    
 }
  


return 0;
}

