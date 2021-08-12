#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double A, B, C, x1, x2, delta;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A == 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	delta = pow(B, 2) - (4 * A * C);
	if(delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	x1 = (-B + sqrt(delta)) / (2.0*A);
	x2 = (-B - sqrt(delta)) / (2.0*A);
	
	printf("R1 = %.5lf\n", x1);
	printf("R2 = %.5lf\n", x2);
	
	return 0;
}
