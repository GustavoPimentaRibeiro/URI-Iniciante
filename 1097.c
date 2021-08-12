#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double i=0.0, j=1.0, soma=0.2, aux=2;
	int cont=0, conv1, conv2;
	
	while(i < 2){
		if(cont == 3){
			cont = 0;
			i += 0.2;
			j = 1.0;
			j += soma;
			soma += 0.2;
			if(soma > 1.0){
				soma = 0.2;
				j -= 1.0;
			}
		}else{
			conv1 = j;
			conv2 = i;
			if((j - conv1) == 0.0 && (i - conv2) == 0.0){
				printf("I=%.0lf J=%.0lf\n", i, j);
			}else if((j - conv1) == 0.0 && (i - conv2) != 0.0){
				printf("I=%.1lf J=%.0lf\n", i, j);
			}else if((j - conv1) != 0.0 && (i - conv2) == 0.0){
				printf("I=%.0lf J=%.1lf\n", i, j);	
			}else{
				printf("I=%.1lf J=%.1lf\n", i, j);
			}
			cont++;
			j += 1.0;
			aux = 2;
		}
	}
	
	return 0;
}
