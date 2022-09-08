#include <stdio.h>

int recur(int n){
    if(n>0){
        return n * recur(n-1);
    }    
    else{
        return 1;
    }     
}

int main(){
    double n = 0, r = 0;
    double res = 0;
    printf("Ingresa la variable n:");
    scanf("%f",&n);

    printf("Ingresa el numero de casillas:");
    scanf("%f",&r);

    res = recur(n) / (n - recur(r));

    printf("El resultado de la permutacion es: %.2f\n");
    return 0;
}