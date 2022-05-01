#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double S=0, i, fixo = 1;
	
	for(i = 1; i <= 100; i ++){
		S += (fixo / i);
	}
	
	printf("%.2lf\n", S);
	
	return 0;
}
