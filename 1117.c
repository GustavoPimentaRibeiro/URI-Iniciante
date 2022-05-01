#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

	double nota, soma=0;
	int cont=0;
	
	while(cont != 2){
		scanf("%lf", &nota);
		if(nota >= 0 && nota <= 10){
			soma += nota;
			cont ++;
		}else{
			printf("nota invalida\n");
		}
	}
	
	soma /= cont;
	printf("media = %.2lf\n", soma);
	
	return 0;
}
