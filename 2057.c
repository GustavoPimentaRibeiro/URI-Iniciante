#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short S, T, F;
	
	scanf("%hd %hd %hd", &S, &T, &F);
	
	int hora = S + T + F;
	
	if(hora < 0){
		hora = 24 + hora;
	}else{
		hora %= 24;
	}
	
	printf("%d\n", hora);
	
	return 0;
}
