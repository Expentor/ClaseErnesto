#include <stdio.h>

int main(){
	int materia[7];
	float promedio = 0;

	for (int i=0; i < 7; i++){
		printf("Añada su %da calificacion: ", i+1);
		scanf("%f", &materia[i]);
		promedio += materia[i];
	}
	for (int i=0; i < 7; i++){
		printf("%.2f \n", &materia[i]);
	}
	
	return 0;
}

