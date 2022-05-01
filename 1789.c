#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, maior, i;
	
	while(scanf("%d", &n) != EOF){
		int vet[n];
		for(i = 0; i < n; i ++){
			scanf("%d", &vet[i]);
			if(i == 0){
				maior = vet[i];
			}else{
				if(maior < vet[i]){
					maior = vet[i];
				}
			}
		}
		if(maior < 10){
			printf("1\n");
		}else if(maior >= 10 && maior < 20){
			printf("2\n");	
		}else if(maior >= 20){
			printf("3\n");
		}
	}
	
	return 0;
}
