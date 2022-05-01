#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	if(A >= B){
		printf("%d\n", A);
	}else{
		printf("%d\n", B);
	}
	
	return 0;
}
