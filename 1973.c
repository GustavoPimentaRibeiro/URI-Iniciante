#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXSIZE 1000010

char seen[MAXSIZE];

int main (){
	int i;
	unsigned N;	
	scanf("%u", &N);

	long long unsigned tot = 0;
	unsigned X[N];
	
	for (i = 0; i < N; i ++){
		scanf("%u", &X[i]);
		tot += X[i];
	}

	i = 0;
	long long unsigned ans = 0;
	while (i >= 0 && i < N){
		if (!seen[i]){
			++ans;
		}	
		seen[i] = true;
		if(X[i] & true){
			tot --;
			X[i++] --;
		}else{
			if(X[i]){
				tot --;
				X[i] --;
			}
			i --;
		}
	}

	printf("%llu %llu\n", ans, tot);
	return 0;
}
