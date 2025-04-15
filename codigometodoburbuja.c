int main(int argc, char *argv[])
{
int vector[6];
int aux = 0;

srand(getpid());//Sirve para generar numeros diferentes tomando el numero de proceso del sistema operativo
printf("Vector desordenado:");
for(int i=0; i<6;i++)
{
vector[i] = rand() % 51;
printf("%d|",vector[i]);
}
//Ordenamiento Ascendente:
for(int i=0 ; i<6 ; i++)
{
for(int j=0 ; j<6 ; j++)
{
if(vector[j]>vector[j+1])//j es la posicion siguiente
{
aux = vector[j];
vector[j] = vector[j+1];
vector[j+1] = aux;
}
}
}

printf("\n\nVector ordenado:");
for(int i=0; i<6;i++)
{
printf("%d|",vector[i]);
}

/*Otro metodo
for(int j=i+1 ; j<6 ; j++)
{
if(vector[i]>vector[j])//j es la posicion siguiente
{
aux=vector[i];
vector[i]=vector[j];
vector[j]=aux;
}
*/


return 0;
}