int main(int argc, char *argv[])
{
//EJEMPLO 1
int numero=7; //Declaración de variable entera de tipo entero
int *puntero; //Declaración de variable puntero de tipo entero
puntero = &numero; //Asignación de la dirección memoria de a
printf("El valor del numero es: %d. \nEl valor de *puntero es: %d. \n",numero,*puntero);
printf("La direccion de memoria de *puntero es: %p",puntero);//Para obtener la direccion de memoria
cambioDeValor(&numero);
printf("El valor del numero es: %d. \nEl valor de *puntero es: %d. \n",numero,*puntero);

//EJEMPLO 2 (comentar el ejemplo 1 antes de ejecutarlo)
int num1=2, num2=4;
printf("numero1 es %d, numero2 es %d",num1,num2);

intercambiaConPunteros(&num1,&num2);
printf("\n Luego de ejecutar funcion el numero1 es %d, numero2 es %d",num1,num2);


return 0;
}
void intercambiaConPunteros(int *pnum1,int *pnum2)
{
int aux;

aux= *pnum1;
*pnum1= *pnum2;
*pnum2= aux;
}

void cambioDeValor(int *pnum)
{
*pnum = 20;
}

void intercambia(int pnum1,int pnum2)//No utiliza punteros
{
int aux;
aux= pnum1;
pnum1= pnum2;
pnum2= aux;
}