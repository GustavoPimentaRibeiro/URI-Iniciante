#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int t, i, pa, pb, cont, op=1;
	double g1, g2;
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i ++){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		cont = 0;
		op = 1;
		while(pa <= pb){
			if(cont >= 100){
				op = 2;
				break;
			}
			pa = pa + (pa*(g1/100));
			pb = pb + (pb*(g2/100));
			cont ++;
		}
		if(op == 1){
			printf("%d anos.\n", cont);
		}else{
			printf("Mais de 1 seculo.\n");
		}
		
	}
	
	return 0;
}
