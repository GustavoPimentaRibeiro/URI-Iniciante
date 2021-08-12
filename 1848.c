#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int soma = 0, contcaw = 0;
	char corvo[50];
	
	while(contcaw < 3){
		gets(corvo);
		if(strcmp(corvo, "caw caw") == 0){
			printf("%d\n", soma);
			contcaw ++;
			soma = 0;
		}else{
			if(corvo[0] == '*'){
				soma += 4;
			}
			if(corvo[1] == '*'){
				soma += 2;
			}
			if(corvo[2] == '*'){
				soma += 1;
			}
		}
	}
	
	return 0;
}
