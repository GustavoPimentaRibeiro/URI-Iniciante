#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double sal, imposto, div;
	
	scanf("%lf", &sal);
	
	if(sal >= 0.0 && sal <= 2000.0){
		printf("Isento\n");
	}else if(sal > 2000.0 && sal <= 3000.0){
		imposto = sal - 2000;
		imposto = imposto * 0.08;
		printf("R$ %.2lf\n", imposto);
	}else if(sal > 3000.0 && sal <= 4500.0){
		imposto = sal - 3000;
		imposto = (1000 * 0.08) + (imposto * 0.18);
		printf("R$ %.2lf\n", imposto);
	}else if(sal > 4500.0){
		imposto = sal - 4500;
		imposto = (1000 * 0.08) + (1500 * 0.18) + (imposto * 0.28);
		printf("R$ %.2lf\n", imposto);
	}
	
	return 0;
}
