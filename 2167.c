#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

short solve(short n, short r[n]) {
	short i;
	
	for(i = 1; i < n; i ++) {
		if(r[i] < r[i-1])
			return i+1;
	}
	
	return 0;
}

int main(){
	short n, res = 0, i;
	
	scanf("%hd", &n);
	
	short r[n];
	
	for(i = 0; i < n; i ++)
		scanf("%hd", &r[i]);
	
	printf("%hd\n", solve(n, r));
	return 0;
}
