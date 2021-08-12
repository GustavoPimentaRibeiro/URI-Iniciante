#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n[20], i = 0, j= 19, aux;
	
	for(i = 0; i < 20; i ++){
		scanf("%d", &n[i]);
	}
	
	i = 0;
	while(i != 10 && j != 9){
		aux = n[i];
		n[i] = n[j];
		n[j] = aux;
		i ++;
		j --;
	}
	
	for(i = 0; i < 20; i ++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
	return 0;
}
