#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, val, i;
	
	scanf("%d", &n);
	
	for(i = 1; i <= 10; i ++){
		val = n * i;
		printf("%d x %d = %d\n", i, n, val);
	}
	
	return 0;
}
