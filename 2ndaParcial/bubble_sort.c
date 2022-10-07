#include <stdio.h>

int bubble_sort(int *array, int n){
    int temp = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int size;

    printf("Escribe el tamaño del arreglo: ");
    scanf("%d",&size);
    
    int array[size];
    
    for(int i=0; i<size; i++){
    printf("Escribe el digito número: %d: ", i);
    scanf("%d",&array[i]);
    }

    bubble_sort(array, size);

    for(int i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }

   return 0;
}