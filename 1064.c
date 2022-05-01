#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int cont = 0, i;
	double n, media = 0;
	
	for(i = 0; i < 6; i ++){
		scanf("%lf", &n);
		if(n > 0.0){
			cont++;
			media += n;
		}
	}
	
	media /= cont;
	
	printf("%d valores positivos\n", cont);
	printf("%.1lf\n", media);
	
	return 0;
}
