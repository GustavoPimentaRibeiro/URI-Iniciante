#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n=1, cont, i, j;
	
	while(n != 0){
		scanf("%d", &n);
		if(n == 0){
			continue;
		}else{
			int mat[n][n];
			cont = 0;
			for(i = 0; i < n; i ++){
				for(j = 0; j < n; j ++){
					if(i == j){
						mat[i][j] = pow(4, cont);
						cont ++;
					}
				}
			}
			cont = 0;
			for(j = 0; j < n; j ++){
				mat[0][j] = pow(2, j);
				mat[j][0] = pow(2, j);
			}
			for(i = 1; i < n; i ++){
                for(j = 1; j < n; j ++){
                	mat[i][j] = mat[i-1][j] + mat[i][j-1];
                }
            }
			for(i = 0; i < n; i ++){
                for(j = 0; j < n; j ++){
                    if(j == 0){
                    	printf("%3d", mat[i][j]);
					}else{
						printf(" %3d", mat[i][j]);
					}
                }
                printf("\n");
            }
            printf("\n");
		}
	}
	
	return 0;
}
