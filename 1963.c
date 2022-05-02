#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	double A, B;
	
	scanf("%lf %lf", &A, &B);
	
	double porcent;
	
	porcent = ((B - A) / A) * 100;
	
	printf("%.2lf%%\n", porcent);
	
	return 0;
}
