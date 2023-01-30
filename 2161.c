#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, i;
	double raiz = 0.0;
	
	scanf("%d", &n);
	
	if(n == 0){
		raiz = 3.0;
		printf("%.10lf\n", raiz);
		return 0;
	}
	
	for (i = 0; i < n; i ++) {
        raiz += 6.0;
        raiz = (1.0 / raiz);
	}
    raiz += 3.0;
	
	printf("%.10lf\n", raiz);
	
	return 0;
}
