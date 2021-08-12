#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, x, y;
	double valor;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d %d", &x, &y);
		if(y == 0){
			printf("divisao impossivel\n");
		}else{
			valor = (double)x / (double)y;
			printf("%.1lf\n", valor);
		}
		
	}
	
	return 0;
}
