#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short n, m;
	
	scanf("%hd %hd", &n, &m);
	
	short t[n][m], i, j, x = 0, y = 0;
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < m; j ++){
			scanf("%hd", &t[i][j]);
		}	
	}
	
	for(i = 1; i < n-1; i ++){
		for(j = 1; j < m-1; j ++) {
			if(t[i][j] == 42 ) {
				if (t[i-1][j-1] == 7 && t[i-1][j] == 7 && t[i-1][j+1] == 7) {
					if(t[i][j+1] == 7 && t[i+1][j+1] == 7 && t[i+1][j] == 7) {
						if(t[i+1][j-1] == 7 && t[i][j-1] == 7) {
							x = i + 1;
							y = j + 1;
						}
					}
				}
			}
		}
	}
	
	printf("%d %d\n", x, y);
	
	return 0;
}
