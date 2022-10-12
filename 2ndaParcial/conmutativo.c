#include <stdio.h>

int main(){
    int sum = 0;

    for(int i=-5; i<=11; i++){
        sum = sum + i;
    }

    printf("El resultado es: %d",sum);

    return 0;
}