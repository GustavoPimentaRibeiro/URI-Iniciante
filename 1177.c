#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int vet[1000], t, cont=0, i;
	
	scanf("%d", &t);
	
	for(i = 0; i < 1000; i ++){
		if(cont == t){
			cont = 0;
			vet[i] = cont;
			printf("N[%d] = %d\n", i, vet[i]);
			cont++;
			continue;
		}
		vet[i] = cont;
		printf("N[%d] = %d\n", i, vet[i]);
		cont++;
	}
	
	return 0;
}
