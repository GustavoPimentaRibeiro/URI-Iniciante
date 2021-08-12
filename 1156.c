#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double S=0, i, dois = 1, sequencia = 0;
	
	for(i = dois; i <= 39; i += 2){
		S += (i / pow(2, sequencia));
		sequencia ++;
	}
	
	printf("%.2lf\n", S);
	
	return 0;
}
