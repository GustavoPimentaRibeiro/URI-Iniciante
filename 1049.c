#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char especie[12], subespecie[8], alimenta[11];
	
	scanf("%s", especie);
	scanf("%s", subespecie);
	scanf("%s", alimenta);
	
	if(strcmp(especie, "vertebrado") == 0){
		if(strcmp(subespecie, "ave") == 0){
			if(strcmp(alimenta, "carnivoro") == 0){
				printf("aguia\n");
				return 0;
			}else if(strcmp(alimenta, "onivoro") == 0){
				printf("pomba\n");
				return 0;
			}
		}else if(strcmp(subespecie, "mamifero") == 0){
			if(strcmp(alimenta, "onivoro") == 0){
				printf("homem\n");
				return 0;
			}else if(strcmp(alimenta, "herbivoro") == 0){
				printf("vaca\n");
				return 0;
			}
		}
	}else if(strcmp(especie, "invertebrado") == 0){
		if(strcmp(subespecie, "inseto") == 0){
			if(strcmp(alimenta, "hematofago") == 0){
				printf("pulga\n");
				return 0;
			}else if(strcmp(alimenta, "herbivoro") == 0){
				printf("lagarta\n");
				return 0;
			}
		}else if(strcmp(subespecie, "anelideo") == 0){
			if(strcmp(alimenta, "hematofago") == 0){
				printf("sanguessuga\n");
				return 0;
			}else if(strcmp(alimenta, "onivoro") == 0){
				printf("minhoca\n");
				return 0;
			}
		}
	}
	
	return 0;
}
