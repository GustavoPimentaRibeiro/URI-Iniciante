#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long n, m;
	short notas[6] = {2, 5, 10, 20, 50, 100}, i, j;
	bool achou;
	
	scanf("%ld %ld", &n, &m);
	while(n != 0 && m != 0){
		achou = false;
		for(i = 0; i < 6; i ++){
			for(j = 0; j < 6; j ++){
				if(notas[i] + notas[j] == m - n){
					printf("possible\n");
					achou = true;
					break;
				}
			}
			if(achou){
				break;
			}
		}
		if(!achou){
			printf("impossible\n");
		}
		scanf("%ld %ld", &n, &m);
	}
	
	return 0;
}
