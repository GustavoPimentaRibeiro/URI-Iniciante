#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int D[] = {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char *R[] = {"CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int main(){
	int num;

	scanf("%d", &num);

	int i = 0;
	
	while(num){
		while(num / D[i]){
			printf("%s", R[i]);
			num -= D[i];
		}
		i ++;
	}
	
	printf("\n");
	return 0;
}
