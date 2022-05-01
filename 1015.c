#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
	double x;
	double y;	
}Plano;

int main(){
	Plano p1, p2;
	float distancia;
	
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	
	distancia = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	
	printf("%.4lf\n", distancia);
	
	return 0;
}
