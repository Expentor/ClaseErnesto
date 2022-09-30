//Problema resuelto
//Aurelio Adair Fernandez Santiago

#include <stdio.h>

int problem2(int n);

int main(){
    int n=0;
    printf("Ingrese el valor de n: \n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d, ", problem2(i));
    }
    return 0;
}


int problem2(int n){
    if(n==1){
        return 5;
    }
    else{
        return problem2(n-1) * 3;
    }
}