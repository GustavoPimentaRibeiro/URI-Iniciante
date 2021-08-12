#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int cod=0, conta=0, contg=0, contd=0;
	
	while(cod != 4){
		cod = 0;
		while(cod < 1 || cod > 4){
			scanf("%d", &cod);
		}
		switch(cod){
			case 1:
				conta ++;
			break;
			
			case 2:
				contg ++;
			break;
			
			case 3:
				contd ++;
			break;
			
			case 4:
			break;
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", conta);
	printf("Gasolina: %d\n", contg);
	printf("Diesel: %d\n", contd);
	
	return 0;
}
