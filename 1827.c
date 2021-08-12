#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, cont, i, j;
	
	while(scanf("%d", &n) != EOF){
		int mat[n][n];
		for(i = 0; i < n; i ++){
			for(j = 0; j < n; j ++){
				mat[i][j] = 0;
			}
		}
		cont = n-1;
		for(i = 0; i < n; i ++){
			mat[i][i] = 2;
			mat[i][cont] = 3;
			cont --;
		}
		for(i = n/3; i < n-(n/3); i ++){
			for(j = n/3; j < n-(n/3); j ++){
				mat[i][j] = 1;
			}
		}
		if(n % 2 == 1){
			mat[n/2][n/2] = 4;
		}
		for(i = 0; i < n; i ++){
			for(j = 0; j < n; j ++){
				printf("%d", mat[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
