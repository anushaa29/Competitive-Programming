import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int m = s.length();
        int[] lps = new int[m];
        lps[0] = 0;
        int len = 0;
        int i = 1;

        while (i < m) {
            if (s.charAt(i) == s.charAt(len)) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        int smallestPeriod = m - lps[m - 1];
        System.out.println(smallestPeriod);

        sc.close();
    }
}
