#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d%d",&a,&b);
    while(b!=0){
        int carry=(a&b)<<1;
        a=a^b;
        b=carry;
    }  
    
    printf("%d",a);
    return 0;
}
