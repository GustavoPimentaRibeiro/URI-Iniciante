#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, contpa=0, contim=0, contpo=0, contne=0, i;
	
	for(i = 0; i < 5; i ++){
		scanf("%d", &n);
		if(n % 2 == 0){
			contpa ++;
		}
		if(n % 2 == 1 || n % 2 == -1){
			contim ++;
		}
		if(n > 0){
			contpo ++;
		}
		if(n < 0){
			contne ++;
		}
	}
	
	printf("%d valor(es) par(es)\n", contpa);
	printf("%d valor(es) impar(es)\n", contim);
	printf("%d valor(es) positivo(s)\n", contpo);
	printf("%d valor(es) negativo(s)\n", contne);
	
	return 0;
}
