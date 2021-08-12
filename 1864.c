#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, i;
	char texto[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++){
		if(i == n-1){
			printf("%c\n", texto[i]);
		}else{
			printf("%c", texto[i]);
		}
	}
	
	return 0;
}
