#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double vet[100];
	int i;
	
	for(i = 0; i < 100; i ++){
		scanf("%lf", &vet[i]);
		if(vet[i] <= 10){
			printf("A[%d] = %.1lf\n", i, vet[i]);
		}
	}
	
	return 0;
}
