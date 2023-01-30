#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, m, i;
	
	scanf("%d %d", &n, &m);
	
	char acao[6];
	
	for(i = 0; i < m; i ++){
		fflush(stdin);
		scanf("%s", &acao);
		if(strcmp(acao, "clicou") == 0){
			n --;
		}else{
			n ++;
		}
	}
	
	printf("%d\n", n);
	
	return 0;
}
