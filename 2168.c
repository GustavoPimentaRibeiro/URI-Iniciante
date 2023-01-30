#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short n, i, j, cont;
	
	scanf("%hd", &n);
	
	short v[n+1][n+1];
	
	for(i = 0; i < n+1; i ++)
		for(j = 0; j < n+1; j ++)
			scanf("%hd", &v[i][j]);
	
	for(i = 0; i < n; i ++) {
		for(j = 0; j < n; j ++) {
			cont = 0;
			if(v[i][j] == 1) cont ++;
			if(v[i][j+1] == 1) cont ++;
			if(v[i+1][j] == 1) cont ++;
			if(v[i+1][j+1] == 1) cont ++;
			(cont >= 2) ? printf("S") : printf("U");
		}
		printf("\n");
	}
	
	return 0;
}
