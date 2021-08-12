#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int a, b, c, d = 0, e = 1;
    
    scanf("%d", &a);
    
    int ara[a];
    
    for(b = 0; b < a; b ++){
    	scanf("%d", &ara[b]);
	}
	 
    c = ara[d];
    
    for(d = 0; d < a; d ++){
        if(ara[d] < c){
            c = ara[d];
            e = d + 1;
        }

    }
    printf("%d\n", e);
    return 0;
}
