#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i, cont100=0, cont50=0, cont20=0, cont10=0, cont5=0, cont2=0, cont1=0, soma;
		
	scanf("%d", &n);
	
	soma = 0;
	
	while(soma != n){
		cont1++;
		if(cont1 == 2){
			cont1 = 0;
			cont2 ++;
		}
		if(cont2 == 2 && cont1 == 1){
			cont2 = 0;
			cont1 = 0;
			cont5 ++;
		}
		if(cont5 == 2){
			cont5 = 0;
			cont10 ++;
		}
		if(cont10 == 2){
			cont10 = 0;
			cont20 ++;
		}
		if(cont20 == 2 && cont10 == 1){
			cont10 = 0;
			cont20 = 0;
			cont50 ++;
		}
		if(cont50 == 2){
			cont50 = 0;
			cont100 ++;
		}
		soma = (cont1*1) + (cont2*2) + (cont5*5) + (cont10*10) + (cont20*20) + (cont50*50) + (cont100*100);
	}
	
	printf("%d\n", n);
	printf("%d nota(s) de R$ 100,00\n", cont100);
	printf("%d nota(s) de R$ 50,00\n", cont50);
	printf("%d nota(s) de R$ 20,00\n", cont20);
	printf("%d nota(s) de R$ 10,00\n", cont10);
	printf("%d nota(s) de R$ 5,00\n", cont5);
	printf("%d nota(s) de R$ 2,00\n", cont2);
	printf("%d nota(s) de R$ 1,00\n", cont1);
	
	return 0;
}
