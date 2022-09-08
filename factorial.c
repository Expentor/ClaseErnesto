#include <stdio.h>

int main(){
    int n = 0;
    double total = 1;

    printf("Seleccione el factorial de cualquier numero que se le ocurra: \n");
    scanf("%d", &n);

    for(int i=n; i>0; i--){
        total = total * i;
    }

    printf("El resultado es: %.1f \n",total);

    return 0;
}
