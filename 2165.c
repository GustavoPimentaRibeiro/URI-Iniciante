#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 500

int main(){
	char t[MAX];
	
	fgets(t, MAX, stdin);
	
	if(strlen(t) <= 141) {
		printf("TWEET\n");	
	} else {
		printf("MUTE\n");
	}
	
	return 0;
}
