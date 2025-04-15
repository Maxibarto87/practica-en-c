#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{

	char materia = 0;
	double notafinal = 0;
	int asistencia =0;
	char alumno = 0;
	
	printf("Ingrese nombre de la materia: ");
	scanf("%s", &materia);
	
	printf("Ingrese nota final: ");
	scanf("%lf", &notafinal);
	
	printf("Ingrese numero de asistencia: ");
	scanf("%d", &asistencia);
	
	return 0;
}