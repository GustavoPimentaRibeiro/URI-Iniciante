#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, q;
	float total;
	
	scanf("%d %d", &n, &q);
	
	if(n == 1){
		total = q * 4.00;
		printf("Total: R$ %.2lf\n", total);
	}else if(n == 2){
		total = q * 4.50;
		printf("Total: R$ %.2lf\n", total);
	}else if(n == 3){
		total = q * 5.00;
		printf("Total: R$ %.2lf\n", total);
	}else if(n == 4){
		total = q * 2.00;
		printf("Total: R$ %.2lf\n", total);
	}else if(n == 5){
		total = q * 1.50;
		printf("Total: R$ %.2lf\n", total);
	}
	
	return 0;
}
