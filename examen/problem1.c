//No sirve

#include <stdio.h>

int problem1(int a, int b);

int main(){
    int a=0, b=0;
    printf("Ingrese el valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese el valor de b: \n");
    scanf("%d",&b);

    for(int i=0; i<b; i++){
        printf("%d", problem1(a, b));
    }

    return 0;
}

int problem1(int a, int b){
    if(b==0){
        return 1;
    }
    else if(a==0){
        return 0;
    }
    return (a * a) * b;
}