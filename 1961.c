#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int P, N, i;
	
	scanf("%d %d", &P, &N);
	
	int vet[N];
	
	for(i = 0; i < N; i ++){
		scanf("%d", &vet[i]);
	}
	
	bool encontrou = true;
	
	for(i = 0; i < N-1; i ++){
		if(abs(vet[i+1] - vet[i]) > P){
			encontrou = false;
		}
	}
	
	if(encontrou){
		printf("YOU WIN\n");
	}else{
		printf("GAME OVER\n");
	}
	return 0;
}
