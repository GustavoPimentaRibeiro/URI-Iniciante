#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double a, b, c, aux;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a > b && a > c){
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}else if(b > a && b > c){
		aux = a;
		a = b;
		b = aux;
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}else if(c > a && c > b){
		aux = a;
		a = c;
		c = aux;
		if(b < c){
			aux = b;
			b = c;
			c = aux;
		}
	}
	
	if(a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO RETANGULO\n");
		if(a == b && a == c){
			printf("TRIANGULO EQUILATERO\n");
		}else if(a == b || a == c || b == c){
			printf("TRIANGULO ISOSCELES\n");
		}
	}else if(pow(a, 2) > pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO OBTUSANGULO\n");
		if(a == b && a == c){
			printf("TRIANGULO EQUILATERO\n");
		}else if(a == b || a == c || b == c){
			printf("TRIANGULO ISOSCELES\n");
		}
	}else if(pow(a, 2) < pow(b, 2) + pow(c, 2)){
		printf("TRIANGULO ACUTANGULO\n");
		if(a == b && a == c){
			printf("TRIANGULO EQUILATERO\n");
		}else if(a == b || a == c || b == c){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
	return 0;
}
