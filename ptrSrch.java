import java.io.*;
import java.util.*;

public class ptrSrch {
        static void search(String ptr,String txt){
        int m=ptr.length();
        int n=txt.length();
        int lps[]=new int[m];
        lps[0]=0;
        int i=1,len=0;
        while(i<m){
            if(ptr.charAt(i)==ptr.charAt(len)){
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len==0){
                    lps[i]=0;
                    i++;
                }
                else {
                    len=lps[len-1];
                }
            }  
        }
        i=0;
        int j=0;
        while(i<n){
            if(ptr.charAt(j)==txt.charAt(i)){
                i++;
                j++;
            }
            if (j == m) {
                System.out.println(i - j);
                j = lps[j - 1];
            }
            else if (i < n && ptr.charAt(j) != txt.charAt(i)) {
                if (j != 0) {
                    j = lps[j - 1];
                } 
                else {
                    i++;
                }
            }
        }
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
     Scanner sc=new Scanner(System.in);
   String txt = sc.nextLine();
   String ptr = sc.nextLine();
   search(ptr, txt);
    }
}
 {
    
}
