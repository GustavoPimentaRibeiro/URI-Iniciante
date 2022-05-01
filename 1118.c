#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

	double nota, soma;
	int cont=0, op=1;
	
	while(op != 2){
		soma = 0;
		cont = 0;
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
		op = 0;
		while(op < 1 || op > 2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &op);
		}
	}
	
	return 0;
}
