#include <stdio.h>
#include <time.h>

int mayor(int N, int array[], int i, int *pos){
	
	int aux = array[0];

	for(i = 0; i < N; i++){
		if(aux < array[i]){
			aux = array[i];
			*pos = i;
		}
	}
	
	return aux;
}

int menor(int N, int array[], int i){
	
	int aux = array[0];

	for(i = 0; i < N; i++){
		if(aux > array[i]){
			aux = array[i];
		}
	}
	
	return aux;
}

int main(){
	
	int N, aux, aux2, i , posicion = 0;
	
	printf("Escriba la longitud de el arreglo: \n");
	scanf("%i", &N);
	
	int array[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++){
		array[i] = rand()%9;
		printf("%i  ", array[i]);
	}
	
	aux = mayor(N, array, i, &posicion);
	
	printf("\nEl numero mayor del arreglo es: %i", aux);
	printf("\nY su posicion es: %i", posicion + 1);
	
	aux2 = menor( N, array,i);
	
	printf("\nAdemas, el numero menor del arreglo es: %i", aux2);
	
	return 0;
}
