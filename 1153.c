#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, fibo = 1;
	
	scanf("%d", &n);
	
	for(i = n; i >= 1; i --){
		fibo *= i;
	}
	
	printf("%d\n", fibo);
	
	return 0;
}
