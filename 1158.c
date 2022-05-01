#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, x, y, soma, i, j, cont=0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d %d", &x, &y);
		soma = cont = 0;
		if(x % 2 == 1){
			j = x;
			while(cont < y){
				soma += j;
				j += 2;
				cont ++;
			}
			printf("%d\n", soma);
		}else{
			x ++;
			j = x;
			while(cont < y){
				soma += j;
				j += 2;
				cont ++;
			}
			printf("%d\n", soma);
		}
	}
	
	return 0;
}
