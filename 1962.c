#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	unsigned N, T;
	int resultado, i;

	scanf("%d", &N);
	for (i = 0; i < N; i ++){
		scanf("%d", &T);	
		resultado = T - 2015;
		if (resultado > 0)
			printf("%d A.C.\n", resultado + 1);
		else if (resultado < 0)
			printf("%d D.C.\n", -resultado);
		else
			printf("1 A.C.\n");
	}
	
	return 0;
}
