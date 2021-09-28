#include <stdio.h>
#include <time.h>

int menor(int N, int array[], int i, int *pos){
	
	int aux = array[0];

	for(i = 0; i < N; i++){
		if(aux > array[i]){
			aux = array[i];
			*pos = i;
		}
	}
	
	return aux;
}

int main(){
	
	int N, aux, i, posicion = 0;
	
	printf("Escriba la longitud de el arreglo: \n");
	scanf("%i", &N);
	
	int array[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++){
		array[i] = rand()%9;
		printf("%i  ", array[i]);
	}
	
	aux = menor(N, array, i, &posicion);
	
	printf("\nEl numero menor del arreglo es: %i\n", aux);
	printf("Y su posicion es: %i", posicion + 1);
	
	return 0;
}
