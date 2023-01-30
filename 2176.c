#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char s[101];
	
	scanf("%100[^\n]s", &s);
	fflush(stdin);

	short cont = 0, i;
	for(i = 0; i < strlen(s); i ++) {
		if(s[i] == '1') {
			cont ++;
		}
	}
	
	short tam = strlen(s);
	if(cont % 2 == 0){
		s[tam] = '0';
		if(tam+1 <= 100) s[tam+1] = '\0';
	} else {
		s[tam] = '1';
		if(tam+1 <= 100) s[tam+1] = '\0';
	}
	
	printf("%s\n", s);
	
	return 0;
}
