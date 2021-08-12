#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, j, soma=1;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i ++){
		for(j = 1; j <= 3; j ++){
			printf("%d ", soma);
			soma ++;
		}
		soma ++;
		printf("PUM\n");
	}
	
	return 0;
}
