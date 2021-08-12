#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n, soma, dias, contd=0, contm=0, conta=0;
	
	scanf("%d", &n);
	
	soma = 0;
	
	while(soma != n){
		contd++;
		if(contd == 30){
			contd = 0;
			contm ++;
			if(contm == 12){
				contm = 0;
				conta ++;
			}
		}
		soma = (contd*1) + (contm*30) + (conta*365);
	}
	
	printf("%d ano(s)\n", conta);
	printf("%d mes(es)\n", contm);
	printf("%d dia(s)\n", contd);
	
	return 0;
}
