#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int t, n, i;
	unsigned long long int fibo[60];
	
	scanf("%d", &t);
	
	fibo[0] = 0;
	fibo[1] = 1;
	for(i = 2; i < 60; i ++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	for(i = 0; i < t; i ++){
		scanf("%d", &n);
		printf("Fib(%d) = %llu\n", n, fibo[n]);
	}
	
	return 0;
}
