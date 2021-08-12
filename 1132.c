#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y, soma = 0, i;
	
	scanf("%d %d", &x, &y);
	
	if(x > y){
		for(i = y; i <= x; i ++){
			if(i % 13 != 0){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}else if(x < y){
		for(i = x; i <= y; i ++){
			if(i % 13 != 0){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}else{
		printf("%d\n", soma);
	}
	
	return 0;
}
