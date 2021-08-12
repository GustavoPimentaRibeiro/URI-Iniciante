#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double n[100], x;
	int i;
	
	scanf("%lf", &x);
	
	for(i = 0; i < 100; i ++){
		n[i] = x;
		printf("N[%d] = %.4lf\n", i, n[i]);
		x /= 2.0;
	}
	
	return 0;
}
