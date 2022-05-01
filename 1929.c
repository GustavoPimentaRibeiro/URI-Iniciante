#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
| b - c | < a < b + c
| a - c | < b < a + c
| a - b | < c < a + b
abc
abd
acd
bcd
*/
int main(){
	int a, b, c, d;
	short cont = 0;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if((abs(b-c) < a && a < (b+c)) || (abs(b-d) < a && a < (b+d)) || (abs(c-d) < a && a < (c+d)) || (abs(c-d) < b && b < (c+d))){
		if((abs(a-c) < b && b < (a+c)) || (abs(a-d) < b && b < (a+d)) || (abs(a-d) < c && c < (a+d)) || (abs(b-d) < c && c < (b+d))){
			if((abs(a-b) < c && c < (a+b)) || (abs(a-b) < d && d < (a+b)) || (abs(a-c) < d && d < (a+c)) || (abs(b-c) < d && d < (b+c))){
				cont += 3;
			}
		}
	}
	
	if(cont == 3)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
