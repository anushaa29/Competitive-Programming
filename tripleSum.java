import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n<3){
          System.out.print("Invalid Input");}
        int[] a=new int[n];
        for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
        }
        
        int triplet=sc.nextInt();
        int found=0,sum=0;
        Arrays.sort(a);
        for(int i=0;i<n-2;i++){
             int left=i+1,right=n-1;
            while(left<right){
                sum=a[i]+a[left]+a[right];
                if(a[i]+a[left]+a[right]==triplet){
                    System.out.println(a[i] + " " + a[left] + " " + a[right]);
                    found=1;
                    left++;
                    right--;
                }
            else if(sum>triplet){
                right--;
            }
            else{
                left++;
            }               
            }
        }
        if(found==0){
            System.out.println("No Triplet Found");
        }
    }
}
