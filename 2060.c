#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, i, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	
	scanf("%d", &n);
	
	int L;
	
	for(i = 0; i < n; i ++){
		scanf("%d", &L);
		if(L % 2 == 0){
			c2 ++;
		}
		if(L % 3 == 0){
			c3 ++;
		}
		if(L % 4 == 0){
			c4 ++;
		}
		if(L % 5 == 0){
			c5 ++;
		}
	}
	
	printf("%d Multiplo(s) de 2\n", c2);
	printf("%d Multiplo(s) de 3\n", c3);
	printf("%d Multiplo(s) de 4\n", c4);
	printf("%d Multiplo(s) de 5\n", c5);
	
	return 0;
}
