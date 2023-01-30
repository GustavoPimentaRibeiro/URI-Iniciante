#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short t, i;
	long n;
	
	scanf("%hd", &t);
	while(t != 0){
		for(i = 0; i < t; i ++){
			scanf("%ld", &n);
			if(n % 2 == 0){
				printf("%ld\n", n * 2 - 2);
			}else{
				printf("%ld\n", n * 2 - 1);
			}
		}
		scanf("%hd", &t);
	}
	
	return 0;
}
