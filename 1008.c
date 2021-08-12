#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double salary, ganho;
	int number, horas;
	
	scanf("%d", &number);
	scanf("%d", &horas);
	scanf("%lf", &ganho);
	
	salary = ganho * horas;
	
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2lf\n", salary);
	return 0;
}
