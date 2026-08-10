#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int n;
      scanf("%d",&n);
      int count;
      while(n>0){
        n=n&(n-1);
        count++;
      }
      printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
