#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double A, B, C, D, MEDIA;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	MEDIA = ((A * 2)+ (B * 3) + (C * 5)) / (2 + 3 + 5);
	
	printf("MEDIA = %.1lf\n", MEDIA);
	
	return 0;
}
