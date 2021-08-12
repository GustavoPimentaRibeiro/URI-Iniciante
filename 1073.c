#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, quadrado;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i ++){
		quadrado = 0;
		if(i % 2 == 0){
			quadrado = pow(i, 2);
			printf("%d^2 = %d\n", i, quadrado);
		}
	}
	
	return 0;
}
