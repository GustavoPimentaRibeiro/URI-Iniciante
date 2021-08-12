#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double m[12][12], soma=0, media=0;
	int i, j, cont=0, cont1=12, cont2=0;
	char o;
	
	scanf("%c", &o);
	
	for(i = 0; i < 12; i ++){
		for(j = 0; j < 12; j ++){
			scanf("%lf", &m[i][j]);
		}
	}
	
	if(o == 'S'){
		for(i = 0; i < 12; i ++){
			for(j = 0; j < 12; j ++){
				if((i + j) <= 10){
					soma += m[i][j];
				}
			}
		}
		printf("%.1lf\n", soma);
	}else if(o == 'M'){
		for(i = 0; i < 12; i ++){
			for(j = 0; j < 12; j ++){
				if((i + j) <= 10){
					media += m[i][j];
					cont ++;
				}
			}
		}
		media /= cont;
		printf("%.1lf\n", media);
	}
	
	return 0;
}
