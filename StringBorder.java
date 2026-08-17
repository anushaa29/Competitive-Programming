import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int n=s.length();
        int[] border = new int[n];
        int j = 0; 
        for (int i = 1; i < n; i++) {
            while (j > 0 && s.charAt(i) != s.charAt(j)) {
                j = border[j - 1]; 
            }
            if (s.charAt(i) == s.charAt(j)) {
                j++;
            }
            border[i] = j;
        }
        int length=border[n-1];
        System.out.println(s.substring(0,length));
    }
}

