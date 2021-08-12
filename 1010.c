#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
	int cod;
	int numero;
	double valor;
}Vals;

int main(){
	
	Vals p1, p2;
	double total;
	
	scanf("%d %d %lf", &p1.cod, &p1.numero, &p1.valor);
	scanf("%d %d %lf", &p2.cod, &p2.numero, &p2.valor);
	
	total = (p1.numero * p1.valor) + (p2.numero * p2.valor);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	
	return 0;
}
