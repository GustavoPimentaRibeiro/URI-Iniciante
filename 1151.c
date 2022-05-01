#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, sequencia[46], i;
	
	scanf("%d", &n);
	
	sequencia[0] = 0;
	sequencia[1] = 1;
	
	if(n == 1){
		printf("%d\n", sequencia[0]);
	}else if(n == 2){
		printf("%d %d\n", sequencia[0], sequencia[1]);
	}else{
		printf("%d %d ", sequencia[0], sequencia[1]);
		for(i = 2; i < n; i ++){
			if(i == n-1){
				sequencia[i] = sequencia[i-1] + sequencia[i-2];
				printf("%d\n", sequencia[i]);
			}else{
				sequencia[i] = sequencia[i-1] + sequencia[i-2];
				printf("%d ", sequencia[i]);
			}
		}
	}
	
	
	return 0;
}
