import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
          Scanner sc=new Scanner(System.in);
          int  i=sc.nextInt();
          int j=sc.nextInt();
          int count=0,temp=0,var=0,max_count=0;
          if(i>j){
            temp=i;
            i=j;
            j=temp;
          }
          for(int k=i;k<=j;k++){
            var=k;
            count=1;
            while(var!=1){
            if(var%2==0){
                  var=(var/2);
                  }
            else {
                var=3*var+1;
                }
                count++;
            }
            if(count>max_count)
                  max_count=count;
          }
        System.out.println(i+" "+j+" "+max_count);
    }
}
