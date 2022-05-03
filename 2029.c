#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	double V, D, pi = 3.14, h, A, r;
	
	while(scanf("%lf %lf", &V, &D) != EOF){
		r = D / 2;
		h = V / (pi * (r*r));
		A = V / h;
		printf("ALTURA = %.2lf\n", h);
		printf("AREA = %.2lf\n", A);
	}
	
	return 0;
}
