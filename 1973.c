#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long int N, i = 0, maior = 0, ovelhas = 0;
	
	scanf("%ld", &N);
	
	unsigned long int X[N], soma = 0;
	
	for(i = 0; i < N; i ++){
		scanf("%lu", &X[i]);
		soma += X[i];
	}
	
	i = 0;
	while(i >= 0 && i < N){
		if(maior < i){
			maior = i;
		}
		if(X[i] % 2 == 0){
			if(X[i] >= 1){
				ovelhas ++;
				X[i] --;
			}
			i --;
		}else{
			if(X[i] >= 1){
				ovelhas ++;
				X[i] --;
			}
			i ++;
		}
		
	}
	
	printf("%lu %lu\n", maior+1, soma-ovelhas);
	return 0;
}
