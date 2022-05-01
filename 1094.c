#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int quantia, n, total=0, somac=0, somar=0, somas=0, i;
	char cobaia;
	double percc, percr, percs;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		scanf("%d %c", &quantia, &cobaia);
		total += quantia;
		if(cobaia == 'C'){
			somac += quantia;
		}else if(cobaia == 'R'){
			somar += quantia;
		}else if(cobaia == 'S'){
			somas += quantia;
		}	
	}
	
	percc = ((double)somac/(double)total) * 100;
	percr = ((double)somar/(double)total) * 100;
	percs = ((double)somas/(double)total) * 100;
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", somac);
	printf("Total de ratos: %d\n", somar);
	printf("Total de sapos: %d\n", somas);
	printf("Percentual de coelhos: %.2lf %%\n", percc);
	printf("Percentual de ratos: %.2lf %%\n", percr);
	printf("Percentual de sapos: %.2lf %%\n", percs);
	
	return 0;
}
