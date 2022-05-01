#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	short qt, i;
	long long d1, d2;
	char n1[101],n2[101];
	char p1[6], p2[6];
	
	scanf("%hd", &qt);
	
	for(i = 0; i < qt; i++){
		scanf("%s %s %s %s", &n1, &p1, &n2, &p2);
		scanf("%lld %lld", &d1, &d2);
		
		if((d1 + d2) % 2 == 1){
			if(strcmp(p1, "IMPAR") == 0 || strcmp(p1, "I") == 0){
				printf("%s\n", n1);
			}else{
				printf("%s\n", n2);
			}
		}else{
			if(strcmp(p1, "PAR") == 0 || strcmp(p1, "P") == 0){
				printf("%s\n", n1);
			}else{
				printf("%s\n", n2);
			}
		}
	}
	
	return 0;
}
