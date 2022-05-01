#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, j;
	double x[3], media;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		media = 0;
		for(j = 0; j < 3; j ++){
			scanf("%lf", &x[j]);
		}
		media = (x[0] * 2) + (x[1] * 3) + (x[2] * 5);
		media /= (2 + 3 + 5);
		printf("%.1lf\n", media);
	}
	
	return 0;
}
