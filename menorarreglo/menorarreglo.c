#include <stdio.h>
#include <stdlib.h>




	
	int main() {
    int menor;              
    int arreglo2[4] = {32, 7, 21, 58}; 

    menor = arreglo2[0]; 

    
    for(int i = 1; i < 4; i++) {
        if (arreglo2[i] < menor) {
            menor = arreglo2[i];  
        }
    }

    printf("\n El número menor es: %d\n", menor);
    return 0;
}
	
