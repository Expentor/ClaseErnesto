#include <stdio.h>

void insertion(int *array, int size){
    int i, key;
    for(int j=1; j<size; j++){
        key = array[j];
        i = j-1;
        while(i>-1 && array[i]>key){
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i+1] = key;
    }    
} 

int main () {
   int size;
   printf("Escribe el tamaño del arreglo: ");
   scanf("%d",&size);

   int array[size];

   for(int i=0; i<size; i++){
    printf("Escribe el digito número: %d: ", i);
   scanf("%d",&array[i]);
   }

    insertion(array, size);
    printf("\n");

    for(int i=0; i<size-1; i++){
        printf("%d, ", array[i]);
    }

    printf("\n");

   return 0;
}