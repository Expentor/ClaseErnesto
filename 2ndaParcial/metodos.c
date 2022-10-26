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

int main(){

}