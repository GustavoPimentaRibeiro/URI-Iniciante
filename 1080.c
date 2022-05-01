#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, maior, pos, i;
	
	for(i = 1; i <= 100; i ++){
		scanf("%d", &n);
		if(i == 0){
			maior = n;
		}
		if(n > maior){
			maior = n;
			pos = i;
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", pos);
	
	return 0;
}
