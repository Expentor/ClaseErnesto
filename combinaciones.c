#include <stdio.h>

int main(){
    int n = 0, k = 0, o = 0;
    double factorial1 = 1, factorial2 = 1, factorial3 = 1;
    double resultado = 0;

    printf("Diga cuál es el número total de elementos: \n");
    scanf("%d",&n);

    printf("Diga cuál es el número total de casillas: \n");
    scanf("%d",&k);

    for(int i=n; i>0; i--){
        factorial1 = factorial1 * i;
    }

    for(int i=k; i>0; i--){
        factorial2 = factorial2 * i;
    }

    o = n - k;

    for(int i=o; i>0; i--){
        factorial3 = factorial3 * i;
    }

    resultado = (factorial1) / (factorial3 * factorial2);

    printf("Resultado: %.1f \n",resultado);
    return 0;
}