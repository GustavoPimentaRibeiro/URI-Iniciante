#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, hora, minuto, segundo;
	
	scanf("%d", &n);
	
	segundo = n;
	
	minuto = segundo / 60;
	segundo = segundo % 60;
	hora = minuto / 60;
	minuto = minuto % 60;
	
	printf("%d:%d:%d\n", hora, minuto, segundo);
	
	return 0;
}
