#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int cont = 0, i, n;
	
	for(i = 0; i < 5; i ++){
		scanf("%d", &n);
		if(n %2 == 0){
			cont++;
		}
	}
	
	printf("%d valores pares\n", cont);
	
	return 0;
}
