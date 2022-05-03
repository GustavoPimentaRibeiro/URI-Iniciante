#include <stdio.h>
#include <string.h>

int main(){
	unsigned long long n;
	
	scanf("%llu", &n);
	
	short c;
	while(n != 0){
		c = n % 10;
		printf("%hd", c);
		n /= 10;
	}
	
	printf("\n");	
	return 0;
}
