#include <stdio.h>
#include <string.h>

int main(){
	char l[500];
		
	scanf("%[^\n\r]", l);
	
	if(strlen(l) <= 80){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
}
