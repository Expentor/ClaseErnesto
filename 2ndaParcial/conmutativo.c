#include <stdio.h>

int main(){
    int sum = 0;

    for(int i=0; i<=49; i++){
        sum = sum + ((2 * i) + 1);
    }

    printf("El resultado es: %d",sum);

    return 0;
}