#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

short exist(int q, int vet[5]){
	int i;
	for(i = 0; i < 5; i ++){
		if(q == vet[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	short p, i, aux, qtd;
	int q, produtos[5] = {1001, 1002, 1003, 1004, 1005};
	double valores[5] = {1.50, 2.50, 3.50, 4.50, 5.50}, total = 0.0;
	
	scanf("%hd", &p);
	
	for(i = 0; i < p; i ++){
		scanf("%d %hd", &q, &qtd);
		aux = exist(q, produtos);
		total += qtd * valores[aux];
	}
	
	printf("%.2lf\n", total);
	return 0;
}
