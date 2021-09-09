#include <stdio.h>
 
int main() {
    
    int n, i;
    
    scanf("%d", &n);
    
    char s[n][50];
    
    for(i = 0; i < n; i ++){
        gets(s[i]);
    }
 
    printf("Ciencia da Computacao\n");
    
    return 0;
}
