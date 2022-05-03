#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short int n, i, aux = -1;
	
	scanf("%hd", &n);
	
	long int m[n];
	double nota[n], maior = -1;
	
	for(i = 0; i < n; i ++){
		scanf("%ld %lf", &m[i], &nota[i]);
		if(nota[i] >= 8){
			if(maior < nota[i]){
				maior = nota[i];
				aux = i;
			}
		}
	}
	
	if(aux == -1){
		printf("Minimum note not reached\n");
	}else{
		printf("%ld\n", m[aux]);
	}
	
	return 0;
}
