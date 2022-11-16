#include<stdio.h>
#include<stdlib.h>

int A[5];

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
		while(A[der] > pivote){ // compara todos los elementos de la izquierda con el pivote
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

void bubble(int *A, int n){
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

void leer_archivo(){
	FILE* archivo;
	char c, texto[20];
	int j=0, i=0;

	archivo = fopen("datos.txt","rt");
	do{
		c = fgetc(archivo);
		if (c == ',') {
			A[j] = atoi(texto);
			j++;
			for (int z = 0; z<i; z++)
				texto[z]=0;
			i=0;
			continue;
		}
		texto[i] = c;
		i++;
	}while(c!= EOF);
}

void sort(int *A, int n, int key){
	for(int i=0; i<=n; i++){
		if (A[i] == key) {
			printf("He encontrado el numero en la posicion: %d \n",A[i]);
		}else{
			printf("No existe ese numero dentro del array");
		}
	}
}
void examen(int *A, int n){
	int saco;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(A[i] > A[j]){
				saco = A[i];
				A[i] = A[j];
				A[j] = saco;
			}
		}
	}
}

void busqueda_secuencial(int *A, int n, int e){
	int pos = 0;
	while(pos<n){
		if(A[pos] == e){
			printf("El dato %d se encontro en la posicion: %d \n",e, pos);
			return 0;
		}else{
			pos = pos+1;
		}
	}
	printf("No se encontró el numero dentro del arreglo\n");
}

int main(){

	int n = 5;
	int opc = 9;
	do {
		printf("***Bienvenido al programa***\n");
		printf("Seleccione el metodo de ordenamiento que deseas utilizar: \n");
		printf("1. QuickSort\n");
		printf("2. BubbleSort\n");
		printf("3. InsertionSort\n");
		printf("4. Código del examen\n");
		printf("5. Búsqueda secuencial\n");
		printf("9. Salir");
		printf("\n");
		scanf("%d",&opc);
		printf("\n\n");

		switch (opc)
		{
		case 1:
			leer_archivo();
			printf("Input: ");
			pantalla(A, n);
			quicksort(A, 0, n-1);
			printf("Output: ");
			pantalla(A, n);
			printf("\n");
			break;
		case 2:
			leer_archivo();
			printf("Input: ");
			pantalla(A, n);
			bubble(A, n);
			printf("Output: ");
			pantalla(A, n);
			printf("\n");
			break;
		case 3:
			leer_archivo();
			printf("Input: ");
			pantalla(A, n);
			insertion_sort(A, n);
			printf("Output: ");
			pantalla(A, n);
			printf("\n");
			break;
		case 4:
			leer_archivo();
			printf("Input: ");
			pantalla(A, n);
			examen(A, n);
			printf("Output: ");
			pantalla(A, n);
			printf("\n");
			break;
		case 5:
			int e = 0;
			leer_archivo();
			printf("Input: ");
			pantalla(A, n);
			printf("¿Qué numero quieres buscar dentro del array? \n");
			scanf("%d", &e);
			busqueda_secuencial(A, n, e);
			printf("\n");
			break;
		case 9:
			return 0;
			break;
		default:
			printf("Seleccione una opción válida la próxima vez \n");
			return 0;
		}
	}while(opc!=0);
	// printf("Escriba el tamaño del array: ");
	// scanf("%d", &n);
	// printf("Array de %d posiciones\n", n);

	// for(int i = 0; i < n; i++){
		// printf("Escriba el numero de la posicion %d: ", i+1);
	// 	scanf("%d", &A[i]);
	// }
	//insertion_sort(A, n);
	//bubble(A, n);
	//quicksort(A,0,n-1);
}