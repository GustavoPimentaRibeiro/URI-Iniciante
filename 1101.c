#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y, soma, i;
	
	x = y = 1;
	
	while(x > 0 && y > 0){
		soma = 0;
		scanf("%d %d", &x, &y);
		if(x > 0 && y > 0){
			if(x > y){
				for(i = y; i <= x; i ++){
					printf("%d ", i);
					soma += i;
				}
				printf("Sum=%d\n", soma);
			}else if(x < y){
				for(i = x; i <= y; i ++){
					printf("%d ", i);
					soma += i;
				}
				printf("Sum=%d\n", soma);
			}
		}
	}
	
	return 0;
}
