#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y, soma, i;
	
	x = 1;
	y = 2;
	
	while(x != y){
		soma = 0;
		scanf("%d %d", &x, &y);
		if(x > y){
			printf("Decrescente\n");
		}else if(x < y){
			
			printf("Crescente\n");
		}
	}
	
	return 0;
}
