#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int a=1, b, c, d, e, f;
	
	while(a != 0){
		scanf("%d", &a);
		if(a != 0){
			scanf("%d %d", &b, &c);
			d = a * b;
            e = (d * 100) / c;
            f = pow(e, 0.5);
            printf("%d\n", f);
		}
	}
	
	return 0;
}
