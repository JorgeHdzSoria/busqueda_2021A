#include <stdio.h>

int menor(int columnas, int array[], int i, int *pos){
	
	int aux = array[0];
	*pos = 0;

	for(i = 0; i < columnas; i++){
		if(aux > array[i]){
			aux = array[i];
			*pos = i;
		}
	}
		
	return aux;
}

int main(){

  	int filas,columnas, aux, posicion = 0;

  	printf("Dame el numero de filas de las Matrices:\n");
	scanf("%i",&filas);

    printf("Dame el numero de columnas de las Matrices:\n");
    scanf("%i",&columnas);

    int matriz[filas][columnas];

    int i,j;

    for(i=0;i<filas;i++){

        for(j=0;j<columnas;j++){
        	
            printf("Dame el valor de la matriz en la posicion[%i][%i]: \n",i,j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("Tu matriz es:\n");

    for(i = 0; i < filas ;i++){
        for(j = 0; j < columnas; j++){
            printf("[%i]", matriz[i][j]);
        }
    printf("\n");
    }
    
    for(j = 0; j < filas; j++){
        aux = menor(columnas, matriz[j], i, &posicion);
		printf("\nEl numero menor del renglon %i es: %i", j + 1, aux);
		printf("\nY su posicion es: %i", posicion + 1);  
    }
    
    return 0;
}
