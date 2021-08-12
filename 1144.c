#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, j, e1, e2, e3, cont=0;
	
	scanf("%d", &n);
	
	e1 = e2 = e3 = 1;
	
	for(i = 1; i <= n*2; i ++){
		printf("%d %d %d\n", e1, e2, e3);
		if(cont == 1){
			cont = 0;
			e1 ++;
			e2 = pow(e1, 2);
			e3 = e1 * e2;
		}else{
			if(e1 > 1){
				cont ++;
				e2 = 1 + pow(e1, 2);
				e3 = e1 * e2 - (e1 - 1);
			}else{
				cont ++;
				e2 = 1 + pow(e1, 2);
				e3 = e1 * e2;
			}
		}
	}
	
	return 0;
}
