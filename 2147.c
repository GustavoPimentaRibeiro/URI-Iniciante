#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int c, i;
	char p[10000];
	float a;
	
	scanf("%d", &c);
	
	for(i = 0; i < c; i ++){
		scanf("%s", &p);
		a = 0.01 * strlen(p);
		printf("%.2f\n", a);
	}
	
	return 0;
}
