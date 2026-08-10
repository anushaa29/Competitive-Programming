#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n;
   scanf("%d", &n);
   
   int a[n];
   for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
   }
   
   int max = a[0];
   for(int i = 0; i < n; i++){
    if(a[i] > max)
      max = a[i];
   }
   
   int count[max + 1];
   for(int i = 0; i <= max; i++) {
       count[i] = 0;
   }
 
   for(int i = 0; i < n; i++){
    count[a[i]]++;
   }
   
   for(int i = 1; i <= max; i++){
    count[i] = count[i] + count[i - 1];
   }
   
   int result[n];
   
   for(int i = n - 1; i >= 0; i--){
    result[--count[a[i]]] = a[i];
   }
   
   for(int i = 0; i < n; i++){
    printf("%d ", result[i]);
   }
   
   
   return 0;
}

