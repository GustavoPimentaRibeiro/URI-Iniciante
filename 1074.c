#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, x, i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d", &x);
		if(x == 0){
			printf("NULL\n");
		}else{
			if(x % 2 == 1 || x % 2 == -1){
				if(x > 0){
					printf("ODD POSITIVE\n");
				}else if(x < 0){
					printf("ODD NEGATIVE\n");
				}
			}else{
				if(x > 0){
					printf("EVEN POSITIVE\n");
				}else if(x < 0){
					printf("EVEN NEGATIVE\n");
				}
			}	
		}	
	}
	
	return 0;
}
