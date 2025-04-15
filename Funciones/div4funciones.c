#include <stdio.h>
#include <stdlib.h>

double ingresarnum() {
    double pnum;
    printf("Ingrese num: ");
    scanf("%lf", &pnum);
    return pnum;
}

double divNumeros(double pnum1, double pnum2) {
    return pnum1 / pnum2;
}

double divNumerosConParametrosYretorno(double pnum1, double pnum2) {
    double pdiv = pnum1 / pnum2;
    printf("La div es: %lf", pdiv);
    return pdiv;
}

int main(int argc, char *argv[]) {
    double num1 = ingresarnum();
    double num2 = ingresarnum();
    double div = divNumerosConParametrosYretorno(num1, num2);

    printf("\n Fuera de la funcion la div es %lf", div);

    return 0;
}