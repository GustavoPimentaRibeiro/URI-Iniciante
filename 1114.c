#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	char ano[100];
	
	while(1){
		scanf("%s", &ano);
		if(strcmp(ano, "2002") == 0){
			printf("Acesso Permitido\n");
			return 0;
		}else{
			printf("Senha Invalida\n");
		}
	}
	
	
	return 0;
}
