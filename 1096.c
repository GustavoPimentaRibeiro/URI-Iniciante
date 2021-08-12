#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int i=1, j=7, cont=0;
	
	while(i < 10){
		if(cont == 3){
			cont = 0;
			i += 2;
			j = 7;
		}else{
			printf("I=%d J=%d\n", i, j);
			cont++;
			j--;
		}
		
	}
	
	return 0;
}
