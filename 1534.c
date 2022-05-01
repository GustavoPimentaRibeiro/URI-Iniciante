#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, j, cont;
	
	while(scanf("%d",&n)!=EOF){
		int mat[n][n];
		cont = n-1;
		for(i = 0; i < n; i ++){
			for(j = 0; j < n; j ++){
				mat[i][j] = 3;
			}
		}
		for(i = 0; i < n; i ++){
			mat[i][i] = 1;
			mat[cont][i] = 2;
			cont --;
		}
		for(i = 0; i < n; i ++){
	        for(j = 0; j < n; j ++){
				printf("%d", mat[i][j]);
	        }
	        printf("\n");
    	}
	}
	
	
	
	return 0;
}
