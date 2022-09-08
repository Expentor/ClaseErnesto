#include <stdio.h>

int permutacion(int n){
    if(n<0)
        return permutacion(n -1) * n;
    else
        return 1;
}



int main () {
    int n = 0;
    printf("Ingresa la potencia para desarrollar el binomio");
    scanf("%d",&n);
}