#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dividend,divisor;
    scanf("%d%d",&dividend,&divisor);
    int a[dividend+divisor];
    a[0]=divisor;
    for(int i=1;i<=dividend;i++){
        a[i]=a[0]+i;
    }  
    int low=0,high=dividend,temp=0;
    while(low<=high){
    int mid=(low+high)/2;
        int sum = 0;
        for (int i = 0; i < mid; i++) {
            sum += divisor;
        }

         if(sum<=dividend){
           temp=mid;
            low=mid+1;
            }
           else{
               high=mid-1;}}
    
    printf("%d",temp);
    return 0;
}
