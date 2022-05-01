#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int hi, hf, total;
	
	scanf("%d %d", &hi, &hf);
	
	if(hi == hf){
		total = 24;
	}else if(hi > hf){
		total = 24 - hi + hf;
	}else{
		total = hf - hi;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", total);
	
	return 0;
}
