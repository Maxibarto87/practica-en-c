#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
    double p1 = 0, p2 = 0, p3 = 0;

    printf("Ingrese la altura de la persona uno: ");
    scanf("%lf", &p1);

    printf("Ingrese la altura de la persona dos: ");
    scanf("%lf", &p2);

    printf("Ingrese la altura de la persona tres: ");
    scanf("%lf", &p3);

    if (p1 == p2 && p2 == p3) {
        printf("Todas las personas tienen la misma altura.\n");
    
    } 
	else if (p1 > p2 && p1 > p3) 
	{
        if (p2 > p3)
            printf("La persona uno es la mas alta y la persona tres es la mas baja.\n");
        else
            printf("La persona uno es la mas alta y la persona dos es la mas baja.\n");
    } 
	else if (p2 > p1 && p2 > p3) {
        if (p1 > p3)
            printf("La persona dos es la mas alta y la persona tres es la mas baja.\n");
        else
            printf("La persona dos es la mas alta y la persona uno es la mas baja.\n");
    } 
	else if (p3 > p1 && p3 > p2) {
        if (p1 > p2)
            printf("La persona tres es la mas alta y la persona dos es la mas baja.\n");
        else
            printf("La persona tres es la mas alta y la persona uno es la mas baja.\n");
    }
	else {
        printf("Hay personas con la misma altura, pero no todas. Considera revisar los valores.\n");
    }

    return 0;
}