#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long long V, mod, div;
	int cont = 0, i;
	char resp[50] = {"\0"};
	char num, aux;
	
	scanf("%lld", &V);
	
	while(V > 0){
		div = V / 16;
		mod = V % 16;
		V /= 16;
		if(mod < 10){
			resp[cont] = mod+48;
		}else{
			if(mod == 10) resp[cont] = 'A';
			if(mod == 11) resp[cont] = 'B';
			if(mod == 12) resp[cont] = 'C';
			if(mod == 13) resp[cont] = 'D';
			if(mod == 14) resp[cont] = 'E';
			if(mod == 15) resp[cont] = 'F';
		}
		cont ++;
	}
	
	cont = strlen(resp)-1;
	for(i = 0; i < strlen(resp)/2; i ++){
		aux = resp[i];
		resp[i] = resp[cont];
		resp[cont] = aux;
		cont--;
	}
	
	printf("%s\n", resp);
	
	return 0;
}
