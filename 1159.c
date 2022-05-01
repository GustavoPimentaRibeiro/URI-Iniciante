#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x=1, cont, soma, i;
	
	while(x != 0){
		scanf("%d", &x);
		if(x != 0){
			soma = 0;
			if(x % 2 == 0){
				for(i = x; i <= x+8; i += 2){
					soma += i;
				}
				printf("%d\n", soma);
			}else{
				for(i = x+1; i <= x+9; i += 2){
					soma += i;
				}
				printf("%d\n", soma);
			}
		}
	}
	
	
	return 0;
}
