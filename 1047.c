#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int hi, mi, hf, mf, totalh, totalm;
	
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	if(hi == hf && mi == mf){
		totalh = 24;
		totalm = 0;
	}else if(hi == hf && mi < mf){
		totalh = 0;
		totalm = mf - mi;
	}else if(hi == hf && mf < mi){
		totalh = 23;
		totalm = 60 - (mi - mf);
	}else if(hi < hf && mi == mf){
		totalh = hf - hi;
		totalm = 0;
	}else if(hi < hf && mi < mf){
		totalh = hf - hi;
		totalm = mf - mi;
	}else if(hi < hf && mi > mf){
		totalh = hf - hi- 1;
		totalm = 60 - (mi - mf);
	}else if(hi > hf && mi == mf){
		totalh = 24 - hi + hf;
		totalm = 0;
	}else if(hi > hf && mi < mf){
		totalh = 24 - hi + hf;
		totalm = mf - mi;
	}else if(hi > hf && mi > mf){
		totalh = 24 - hi + hf - 1;
		totalm = 60 - (mi - mf);
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);
	
	return 0;
}
