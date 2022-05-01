#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int op=1, x, y, conti=0, contg=0, conte=0, contt=0;
	
	while(op != 2){
		scanf("%d %d", &x, &y);
		if(x > y){
			conti ++;
		}else if(x < y){
			contg ++;
		}else{
			conte ++;
		}
		contt++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &op);
	}
	
	printf("%d grenais\n", contt);
	printf("Inter:%d\n", conti);
	printf("Gremio:%d\n", contg);
	printf("Empates:%d\n", conte);
	if(contg > conti){
		printf("Gremio venceu mais\n");
	}else if(conti > contg){
		printf("Inter venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}
	
	return 0;
}
