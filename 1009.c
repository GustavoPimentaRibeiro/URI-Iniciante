#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double salariof, m, total;
	char nome[20];
	
	scanf("%s", &nome);
	scanf("%lf", &salariof);
	scanf("%lf", &m);
	
	total = salariof + (m * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}
