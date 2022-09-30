//Problema resuelto
//Aurelio Adair Fernandez Santiago

#include <stdio.h>

int problem1(int a, int b);

int main(){
    int a=0, b=0;
    printf("Ingrese el valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese el valor de b: \n");
    scanf("%d",&b);

    printf("%d \n", problem1(a, b));

    return 0;
}

int problem1(int a, int b){
    if(b==0){
        return 1;
    }
    else if(a==0){
        return 0;
    }
    else{
        return a * problem1(a,b-1);
    }
}