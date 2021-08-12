#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, x, y, soma = 0, i, j;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		soma = 0;
		scanf("%d %d", &x, &y);
		if(x > y){
			for(j = y+1; j < x; j ++){
				if(j % 2 == 1){
					soma += j;
				}
			}
			printf("%d\n", soma);
		}else if(x < y){
			for(j = x+1; j < y; j ++){
				if(j % 2 == 1){
					soma += j;
				}
			}
			printf("%d\n", soma);
		}else{
			printf("%d\n", soma);
		}
	}
	
	return 0;
}
