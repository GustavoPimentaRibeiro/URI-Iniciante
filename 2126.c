#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char n1[35], n2[35];
	long caso = 1, cont;
	short pos, i, j, k, aux;
	bool achou;
	
	fflush(stdin);
	while(scanf("%s %s", &n1, &n2) != EOF){
		cont = 0;
		pos = -1;
		j = 0;
		for(i = 0; i < strlen(n2); i ++){
			k = 0;
			achou = true;
			if(n1[0] == n2[i] && i + strlen(n1) - 1 <= strlen(n2) - 1){
				for(j = i; j < i + strlen(n1); j ++, k ++){
					if(n2[j] != n1[k]){
						achou = false;
					}
				}
				if(achou){
					cont ++;
					pos = i+1;
				}
			}
		}
		
		printf("Caso #%d:\n", caso);
		if(pos == -1){
			printf("Nao existe subsequencia\n\n");
		}else{
			printf("Qtd.Subsequencias: %ld\n", cont);
			printf("Pos: %hd\n\n", pos);
		}
		fflush(stdin);
		caso ++;
	}
	
	
	return 0;
}
