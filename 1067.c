#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, i;
	
	scanf("%d", &x);
	
	for(i = 1; i <= x; i ++){
		if(i % 2 == 1){
			printf("%d\n", i);
		}	
	}
	
	return 0;
}
