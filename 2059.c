#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short p, j1, j2, r, a, soma;
	
	scanf("%hd %hd %hd %hd %hd", &p, &j1, &j2, &r, &a);
	
	soma = j1 + j2;
	if(p == 1){ //par 
		if((r == 0 && a == 1) || (r == 1 && a == 0) || (soma % 2 == 0 && r == 0 && a == 0)){
			printf("Jogador 1 ganha!\n");
		}else{
			printf("Jogador 2 ganha!\n");
		}
	}else{ // impar
		if((r == 0 && a == 1) || (r == 1 && a == 0) || (soma % 2 == 1 && r == 0 && a == 0)){
			printf("Jogador 1 ganha!\n");
		}else{
			printf("Jogador 2 ganha!\n");
		}
	}
	
	return 0;
}
