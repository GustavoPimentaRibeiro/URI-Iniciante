#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	unsigned long n;
	double p, m;
	
	scanf("%lu", &n);
	
	p = n / log(n);
	m = 1.25506 * p;
	
	printf("%.1lf %.1lf\n", p, m);
	
	return 0;
}
