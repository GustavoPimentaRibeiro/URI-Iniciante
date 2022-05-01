#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i;
	
	long int r1, r2, menor;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%ld %ld", &r1, &r2);
		menor = r1 + r2;
		printf("%ld\n", menor);
	}
	
	return 0;
}
