#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double fibo(short n) {
	return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
}

int main(){
	short n;
	
	scanf("%hd", &n);
	
	printf("%.1lf\n", fibo(n));
	
	return 0;
}
