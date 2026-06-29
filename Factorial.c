#include <stdio.h>

int main() {
    int n;
    int result = 1;
    
    scanf("%d", &n);
   
    while (n > 0) {
        result = result * n; 
        n--;                
    }   

    printf("%d", result);
    
    return 0; 
}
