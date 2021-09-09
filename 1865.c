#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
    int c, i, n;
    char nome[50];
    
    scanf("%d", &c);
    
    for(i = 0; i < c; i ++){
        scanf("%s", &nome);
        scanf("%d", &n);
        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
 
    return 0;
}
