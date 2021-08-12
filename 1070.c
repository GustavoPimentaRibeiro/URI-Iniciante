#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, cont=0;
	
	scanf("%d", &n);
	
	if(n % 2 == 0){
		n ++;
		while(cont != 6){
			printf("%d\n", n);
			n += 2;
			cont ++;
		}
	}else{
		while(cont != 6){
			printf("%d\n", n);
			n += 2;
			cont ++;
		}
	}
	
	
	return 0;
}
