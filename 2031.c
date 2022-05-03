#include <stdio.h>
#include <string.h>

int main(){
	int n, i;
	char j1[10], j2[10];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		fflush(stdin);
		scanf("%s", &j1);
		scanf("%s", &j2);
		if(strcmp(j1, "ataque") == 0){
			if(strcmp(j2, "pedra") == 0){
				printf("Jogador 1 venceu\n");
			}
			if(strcmp(j2, "papel") == 0){
				printf("Jogador 1 venceu\n");
			}
			if(strcmp(j1, j2) == 0){
				printf("Aniquilacao mutua\n");
			}
		}else if(strcmp(j1, "pedra") == 0){
			if(strcmp(j2, "ataque") == 0){
				printf("Jogador 2 venceu\n");
			}
			if(strcmp(j2, "papel") == 0){
				printf("Jogador 1 venceu\n");
			}
			if(strcmp(j1, j2) == 0){
				printf("Sem ganhador\n");
			}
		}else if(strcmp(j1, "papel") == 0){
			if(strcmp(j2, "ataque") == 0){
				printf("Jogador 2 venceu\n");
			}
			if(strcmp(j2, "pedra") == 0){
				printf("Jogador 2 venceu\n");
			}
			if(strcmp(j1, j2) == 0){
				printf("Ambos venceram\n");
			}
		}
	}
	
	return 0;
}
