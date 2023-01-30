#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long n, i;
	
	scanf("%ld", &n);
	
	short h, m, o;
	
	for(i = 0; i < n; i ++){
		scanf("%hd %hd %hd", &h, &m, &o);
		if(o == 1){
			if(h < 10){
				printf("0");
			}
			printf("%hd:", h);
			if(m < 10){
				printf("0");
			}
			printf("%hd - A porta abriu!\n", m);
		}else{
			if(h < 10){
				printf("0");
			}
			printf("%hd:", h);
			if(m < 10){
				printf("0");
			}
			printf("%hd - A porta fechou!\n", m);
		}
	}
	
	return 0;
}
