#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, x, i, conti=0, conto=0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d", &x);
		if(x >= 10 && x <= 20){
			conti ++;
		}else{
			conto ++;
		}
	}
	
	printf("%d in\n", conti);
	printf("%d out\n", conto);
	return 0;
}
