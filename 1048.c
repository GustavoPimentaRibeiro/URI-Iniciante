#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double sal, reajuste1, reajuste2;
	
	scanf("%lf", &sal);
	
	if(sal >= 0.0 && sal <= 400.0){
		reajuste1 = sal * 1.15;
		reajuste2 = sal * 0.15;
		printf("Novo salario: %.2lf\n", reajuste1);
		printf("Reajuste ganho: %.2lf\n", reajuste2);
		printf("Em percentual: 15 %%\n");
	}else if(sal > 400.0 && sal <= 800.0){
		reajuste1 = sal * 1.12;
		reajuste2 = sal * 0.12;
		printf("Novo salario: %.2lf\n", reajuste1);
		printf("Reajuste ganho: %.2lf\n", reajuste2);
		printf("Em percentual: 12 %%\n");
	}else if(sal > 800.0 && sal <= 1200.0){
		reajuste1 = sal * 1.10;
		reajuste2 = sal * 0.10;
		printf("Novo salario: %.2lf\n", reajuste1);
		printf("Reajuste ganho: %.2lf\n", reajuste2);
		printf("Em percentual: 10 %%\n");
	}else if(sal > 1200.0 && sal <= 2000.0){
		reajuste1 = sal * 1.07;
		reajuste2 = sal * 0.07;
		printf("Novo salario: %.2lf\n", reajuste1);
		printf("Reajuste ganho: %.2lf\n", reajuste2);
		printf("Em percentual: 7 %%\n");
	}else if(sal > 2000){
		reajuste1 = sal * 1.04;
		reajuste2 = sal * 0.04;
		printf("Novo salario: %.2lf\n", reajuste1);
		printf("Reajuste ganho: %.2lf\n", reajuste2);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
}
