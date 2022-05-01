#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int aux;
	int cont100=0, cont50=0, cont20=0, cont10=0, cont5=0, cont2=0, cont1=0;
	int cont050=0, cont025=0, cont010=0, cont005=0, cont001=0;
	double n, soma = 0.0;
	
	scanf("%lf", &n);
	
	aux = n;
	
	while(soma != aux){
		// Notas
		cont1 ++;
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
	soma = 0;
	while(soma <= n-aux-0.0001){
		// Moedas
		cont001 ++;
		if(cont010 == 2 && cont001 == 5){
			cont001 = 0;
			cont010 = 0;
			cont025 ++;
		}
		if(cont001 == 5){
			cont001 = 0;
			cont005 ++;
		}
		if(cont005 == 2){
			cont005 = 0;
			cont010 ++;
		}
		if(cont025 == 2){
			cont025 = 0;
			cont050 ++;
		}
		soma = (cont050*0.5) + (cont025*0.25) + (cont010*0.1) + (cont005*0.05) + (cont001*0.01);
	}
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n", cont100);
	printf("%d nota(s) de R$ 50,00\n", cont50);
	printf("%d nota(s) de R$ 20,00\n", cont20);
	printf("%d nota(s) de R$ 10,00\n", cont10);
	printf("%d nota(s) de R$ 5,00\n", cont5);
	printf("%d nota(s) de R$ 2,00\n", cont2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", cont1);
	printf("%d moeda(s) de R$ 0.50\n", cont050);
	printf("%d moeda(s) de R$ 0.25\n", cont025);
	printf("%d moeda(s) de R$ 0.10\n", cont010);
	printf("%d moeda(s) de R$ 0.05\n", cont005);
	printf("%d moeda(s) de R$ 0.01\n", cont001);
	
	return 0;
}
