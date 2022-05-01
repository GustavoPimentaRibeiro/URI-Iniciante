#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int x, y;
	x = y = 1;
	
	while(x != 0 && y != 0){
		scanf("%d %d", &x, &y);
		if(x != 0 && y != 0){
			if(x > 0 && y > 0){
				printf("primeiro\n");
			}else if(x > 0 && y < 0){
				printf("quarto\n");
			}else if(x < 0 && y > 0){
				printf("segundo\n");
			}else if(x < 0 && y < 0){
				printf("terceiro\n");
			}
		}
	}
	
	return 0;
}
