#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double a, b, c, area, perimetro;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(abs(b-c) < a && a < b+c){
		if(abs(a-c) < b && b < a+c){
			if(abs(a-b) < c && c < a+b){
				perimetro = a + b + c;
				printf("Perimetro = %.1lf\n", perimetro);
			}
		}
	}else{
		area = ((a + b) * c) / 2;
		printf("Area = %.1lf\n", area);
	}
	
	return 0;
}
