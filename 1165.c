#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, j, x, cont=0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d", &x);
		cont = 0;
		for(j = 1; j <= x; j ++){
			if(x % j == 0){
				cont ++;
			}
		}
		if(cont == 2){
			printf("%d eh primo\n", x);
		}else{
			printf("%d nao eh primo\n", x);
		}
	}
	
	return 0;
}
