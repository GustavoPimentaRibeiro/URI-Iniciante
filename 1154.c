#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
    int a=1, b=0;
    double c, d=0;
    
    while(a > 0){
        scanf("%d", &a);
        if(a > 0){
        	b += a;
            d ++;
		}
    }
    
    c = b / d;
    
    printf("%.2lf\n",c);
    
    return 0;
}
