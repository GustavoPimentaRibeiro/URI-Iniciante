#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double m[12][12], soma=0, media=0;
	int l, i, j;
	char t;
	
	scanf("%d %c", &l, &t);
	
	for(i = 0; i < 12; i ++){
		for(j = 0; j < 12; j ++){
			scanf("%lf", &m[i][j]);
		}
	}
	
	if(t == 'S'){
		for(i = 0; i < 12; i ++){
			soma += m[l][i];
		}
		printf("%.1lf\n", soma);
	}else if(t == 'M'){
		for(i = 0; i < 12; i ++){
			media += m[l][i];
		}
		media /= 12.0;
		printf("%.1lf\n", media);
	}
	
	return 0;
}
