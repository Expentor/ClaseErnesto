#include <stdio.h>
#include <math.h>

float funcion_1(int n){
    float total = 0;
    for(int i=1; i<=n; i++){
        total = 1.0/i;
    }
    return total;
}

int funcion_2(int n){
    int total = 0;
    for(int i=1; i<=n; i++){
        total = i + 2;
    }
    return total;
}

int funcion_3(int n){
    double total = 0;
    int s = 0;
    double PI = acos(-1.0);

    for(int i=1; i<=n; i++){
        s = i + 1;
        total = cos((PI * n) / 2);
    }
    return total;
}

int funcion_4(int n){
    return 5;
}

int funcion_5(int n){
    int total = 0;
    for(int i=1; i<=n; i++){
        total = 5;
    }
    return total;
}

int funcion_6(int n){
    int total = 0;
    for(int i=1; i<=n; i++){
        total = 5;
    }
    return total;
}

int main(){
    int n = 0; 
    float total = 0;

    printf("Ingresa el dominio: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        total = funcion_4(i);
        printf("Dominio: %d -> Rango: %.2f\n",i,total); 
    }

    return 0;
}

