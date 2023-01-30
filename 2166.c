#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short n, i;
	
	scanf("%hd", &n);
	
	double tot = 0.0;
	
	for(i = 0; i < n; i ++) {
        tot += 2.0;
        tot = (1.0 / tot);
    }
    tot += 1.0;
	
	printf("%.10lf\n", tot);
	
	return 0;
}
