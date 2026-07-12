#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for( int i =0 ;i<n; i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int curr=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            curr+=a[i];}
        else{
            if(curr>max){
                max=curr;}
                curr=a[i];
        }}
    if(curr>max){
     max=curr;}
     
     printf("%d",max);
     return 0;
}
