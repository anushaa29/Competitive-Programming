#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
     scanf("%d",&n);
     float a[n];
     for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
     int max=a[0];
     for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
     }
     int bucket[max+1];
     for(int i=0;i<=max;i++)
        bucket[i]=0;
    for(int i=0;i<max;i++)
         bucket[(int)a[i]]++;
    for(int i=0;i<=max;i++){
        while(bucket[i]!=0){
            printf("%.2f",i);
            bucket[i]--;
        }
    }
    return 0;
}
