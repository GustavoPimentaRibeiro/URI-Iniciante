#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double n1, n2, n3, n4, soma, ef;
	
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	soma = ((n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0)) / (2.0+3.0+4.0+1.0);
	
	if(soma >= 5 && soma < 7){
		scanf("%lf", &ef);
		printf("Media: %.1lf\n", soma);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n", ef);
		ef = (ef + soma) / 2;
		if(ef >= 5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", ef);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", ef);
		}
	}else if(soma < 5){
		printf("Media: %.1lf\n", soma);
		printf("Aluno reprovado.\n");
	}else if(soma >= 7){
		printf("Media: %.1lf\n", soma);
		printf("Aluno aprovado.\n");
	}
	
	return 0;
}
