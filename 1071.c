#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y, soma=0, i;
	
	scanf("%d %d", &x, &y);
	
	if(x > y){
		for(i = y+1; i < x; i ++){
			if(i % 2 == 1 || i % 2 == -1){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}else if(y > x){
		for(i = x+1; i < y; i ++){
			if(i % 2 == 1 || i % 2 == -1){
				soma += i;
			}
		}
		printf("%d\n", soma);
	}else{
		printf("%d\n", soma);
	}
	
	return 0;
}
