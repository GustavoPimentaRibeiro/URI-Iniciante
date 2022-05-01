#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b && a < c){
		printf("%d\n", a);
		if(b < c){
			printf("%d\n", b);
			printf("%d\n", c);
		}else{
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}else if(b < a && b < c){
		printf("%d\n", b);
		if(a < c){
			printf("%d\n", a);
			printf("%d\n", c);
		}else{
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}else if(c < a && c < b){
		printf("%d\n", c);
		if(b < a){
			printf("%d\n", b);
			printf("%d\n", a);
		}else{
			printf("%d\n", a);
			printf("%d\n", b);
		}
	}
	printf("\n%d\n%d\n%d\n", a, b, c);
	
	return 0;
}
