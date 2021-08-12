#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	
	int vetp[5], veti[5], n, cont1=0, cont2=0, i, j;
	
	for(i = 0; i < 15; i ++){
		scanf("%d", &n);
		if(n % 2 == 0){
			if(cont1 == 5){
				for(j = 0; j < 5; j ++){
					printf("par[%d] = %d\n", j, vetp[j]);
				}
				cont1 = 0;
				vetp[cont1] = n;
				cont1 ++;
			}else{
				vetp[cont1] = n;
				cont1 ++;
			}
		}else{
			if(cont2 == 5){
				for(j = 0; j < 5; j ++){
					printf("impar[%d] = %d\n", j, veti[j]);
				}
				cont2 = 0;
				veti[cont2] = n;
				cont2 ++;
			}else{
				veti[cont2] = n;
				cont2 ++;
			}
		}
	}
	
	for(i = 0; i < cont2; i ++){
		printf("impar[%d] = %d\n", i, veti[i]);
	}
	
	for(i = 0; i < cont1; i ++){
		printf("par[%d] = %d\n", i, vetp[i]);
	}
	
	return 0;
}
