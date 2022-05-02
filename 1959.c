#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long int N, L;
	
	scanf("%ld %ld", &N, &L);
	
	unsigned long int P;
	P = N * L;
	
	printf("%lu\n", P);
	return 0;
}
