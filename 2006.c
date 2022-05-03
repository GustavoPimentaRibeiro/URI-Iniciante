#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short T, A, B, C, D, E, cont = 0;
	
	scanf("%hd", &T);
	scanf("%hd %hd %hd %hd %hd", &A, &B, &C, &D, &E);
	
	if(A == T){
		cont ++;
	}
	if(B == T){
		cont ++;
	}
	if(C == T){
		cont ++;
	}
	if(D == T){
		cont ++;
	}
	if(E == T){
		cont ++;
	}
	
	printf("%hd\n", cont);
	return 0;
}
