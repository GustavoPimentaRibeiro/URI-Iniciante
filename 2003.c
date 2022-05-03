#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int charToInt(char c){
	int num = c - '0';
	return num;
}

int main(){
	char horario[4];
	int minutos, horas;
	
	while(scanf("%s", &horario) != EOF){
		minutos = 0;
		horas = charToInt(horario[0]);
		if(horas >= 7){
			minutos = charToInt(horario[3]) + (charToInt(horario[2]) * 10);
			minutos += (horas - 7) * 60;
		}
		printf("Atraso maximo: %d\n", minutos);
	}
	
	return 0;
}
