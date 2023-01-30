#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	short m, a, i;
	short dias[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_dias = 0;
	
	while(scanf("%hd %hd", &m, &a) != EOF){
		if(m == 12 && a == 25){
			printf("E natal!\n");
		}else if(m == 12 && a == 24){
			printf("E vespera de natal!\n");
		}else if(m == 12 && a > 25){
			printf("Ja passou!\n");
		}else{
			for(i = m; i < 12; i ++){
				if(i == m){
					total_dias = dias[m-1] - a;
				}else{
					total_dias += dias[i-1];
				}
			}
			total_dias += 25;
			printf("Faltam %d dias para o natal!\n", total_dias);
		}
	}
	
	return 0;
}
