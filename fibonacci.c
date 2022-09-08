#include<stdio.h>

int fibonacci_recur(int n);

int fibonacci_iter(int n);

int main() {
	int n, m= 0, i;
	int a=0, b=1, c=1;

	printf("Ingrese hasta cuantas iteraciones quiere hacer: \n"); 

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		printf("Pos %d : %d\n",i, fibonacci_recur(m));
		m++;
	}
	return 0;
}

int fibonacci_recur(int n) {
	if(n == 0 || n == 1)
		return n;
	else
		return(fibonacci_recur(n-1) + fibonacci_recur(n-2));
}

int fibonacci_iter(int n){
	int a=0,b=1,c=a+b;
	for(int i=0; i<=n; i++){
		c=a;
		a=b;
		b=c+a;
	}
	return b;
}