#include <stdio.h>
#include <time.h>

int busqueda(int N, int i, int aux, int array[]){
	
		for(i = 0; i < N; i++){
		if (array[i] == aux){
			return i;
		}
	}		
	return -1;
}

int main(){
	
	int N, i, aux, res;
	
	printf("Escriba la longitud de el arreglo: \n");
	scanf("%i", &N);
	
	int array[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++){
		array[i] = rand()%9;
		printf("%i  ", array[i]);
	}
	
	printf("\nEscriba el dato a buscar: \n");
	scanf("%i", &aux);
	
	res = busqueda( N, i, aux, array);
	
	if(res != -1){
		printf("Tu dato esta en la posicion: %i\n", res);
	}else{printf("Tu dato no se encuentra en el arreglo");}
	
	return 0;
}


