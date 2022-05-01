#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n;
	
	while(scanf("%d", &n) != EOF){
		if(n >= 1){
			printf("vai ter duas!\n");
		}else{
			printf("vai ter copa!\n");
		}
	}
	
	return 0;
}
