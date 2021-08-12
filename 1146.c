#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n=1, i;
	
	while(n != 0){
		scanf("%d", &n);
		for(i = 1; i <= n; i ++){
			if(i == n){
				printf("%d\n", i);
			}else{
				printf("%d ", i);
			}
		}
	}
	
	return 0;
}
