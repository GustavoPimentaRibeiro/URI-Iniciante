#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solve(short n, int h[n], bool alt) {
	int i;
	
	for(i = 1; i < n; i ++) {
		if(h[i] == h[i-1]) return 0;
		else if(h[i] > h[i-1]) {
			// É um pico - true
			if(alt && i != 1) 	return 0;
			alt = true;
		} else {
			// É um vale - false
			if(!alt && i != 1) return 0;
			alt = false;
		}
	}
	
	return 1;
}

int main(){
	short n;
	
	scanf("%hd", &n);
	
	int h[n], i;
	
	for(i = 0; i < n; i ++) {
		scanf("%d", &h[i]);
	}

	bool alt = (h[1] > h[0]) ? true : false;
	
	if(n == 2) {
		(h[1] == h[0]) ? printf("0\n") : printf("1\n");
	} else {
		printf("%d\n", solve(n, h, alt));
	}
	
	return 0;
}
