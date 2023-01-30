#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short x;
	long long int m;
	
	while(true) {
		scanf("%hd %lld", &x, &m);
		
		if(x == 0 && m == 0) {
			break;
		} else {
			printf("%lld\n", x * m);
		}
	}
	
	return 0;
}
