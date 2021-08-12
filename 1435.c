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
					mat[i][j] = 0;
				}
			}
			if(n % 2 == 1){
				while(cont <= n / 2){
					for(i = 0+cont; i < n-cont; i ++){
						for(j = 0+cont; j < n-cont; j ++){
							mat[i][j] ++;
						}
					}
					cont ++;
				}
			}else{
				while(cont <= (n/2) + 1){
					for(i = 0+cont; i < n-cont; i ++){
						for(j = 0+cont; j < n-cont; j ++){
							mat[i][j] ++;
						}
					}
					cont ++;
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
