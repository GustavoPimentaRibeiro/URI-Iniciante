#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double Y, total;
	int X;
	
	scanf("%d", &X);
	scanf("%lf", &Y);
	
	total = X / Y;
	
	printf("%.3lf km/l\n", total);
	
	return 0;
}
