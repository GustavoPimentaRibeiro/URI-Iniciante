#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
 
    int c, num, i;
    
    scanf("%d", &c);
    
    for(i = 0; i < c; i ++){
        scanf("%d", &num);
        if(num % 2 == 0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
 
    return 0;
}
