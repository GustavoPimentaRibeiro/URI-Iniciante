#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y, cont=1;
	
	scanf("%d %d", &x, &y);
	
	while(cont != y+1){
		if(cont % x == 0){
			printf("%d\n", cont);
		}else{
			printf("%d ", cont);
		}
		cont ++;
	}
	
	return 0;
}
