#include<stdio.h>

void swap(int *x, int *y){
	int key = *x;
	*x = *y;
	*y = key;
}

int particion(int *A, int izq, int der){
	int pivote = A[izq]; //Seleccionamos el elemtno pivote
	while(1){
		while(A[izq] < pivote){ //compara que todos
			izq++; //los elementos a la derecha sean mayores al pivote
		}
		while(A[der] > pivote){ // compara todos los elementos de la derecha con el pivote
			der--;
		}
		if(izq >= der){
			return der;
		}else{
			swap(&A[izq], &A[der]);
			izq++;
			der--;
		}
	}
}

void quicksort(int a[], int izq, int der) {
	if(izq < der){
		int indice_de_particion = particion(a,izq,der);
		quicksort(a, izq, indice_de_particion);
		quicksort(a,indice_de_particion+1,der);
	}
}

void insertion_sort(int *A, int n){
	for(int j = 1; j < n; j++){
		int key = A[j];
		int i = j - 1;

		while(i > -1 && A[i] > key){
			A[i+1] = A[i];
			i = i - 1;
		}
		A[i+1] = key;
	}
}

void bobol(int *A, int n){
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(A[j] > A[j+1]){
				swap(&A[j], &A[j+1]);
			}
		}
	}
}

void pantalla(int *A, int n){
	for(int i = 0; i < n-1; i++)
		printf("%d, ", A[i]);
	printf("%d", A[n-1]);
	printf("\n");
}

int main(){

	int n = 0;

	printf("Escriba el tamaño del array: ");
	scanf("%d", &n);

	int A[n];

	printf("Array de %d posiciones\n", n);

	for(int i = 0; i < n; i++){
		printf("Escriba el numero de la posicion %d: ", i+1);
		scanf("%d", &A[i]);
	}


	printf("Input: ");
	pantalla(A, n);

	//insertion_sort(A, n);
	//bobol(A, n);
	quicksort(A,0,n);

	printf("Output: ");
	pantalla(A, n);

	printf("\n");
}