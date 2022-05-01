#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int i;
	
	for(i = 1; i <= 100; i ++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
