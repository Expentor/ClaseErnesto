#include <stdio.h>

int main() {
    int n = 10;
    float res = 0, total=0;

    for(int i = 1; i<=n; i++){
        res = i / (i + 1);
        total = total + res;
    }

    printf("%.3f\n",total);

    return 0;
}
