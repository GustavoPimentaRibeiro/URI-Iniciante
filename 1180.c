#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, menor, pos;
	
	scanf("%d", &n);
	
	int vet[n], i;
	
	for(i = 0; i < n; i ++){
		scanf("%d", &vet[i]);
	}
	
	menor = vet[0];
	pos = 0;

	for(i = 0; i < n; i ++){
		if(menor > vet[i]){
			menor = vet[i];
			pos = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
	return 0;
}
