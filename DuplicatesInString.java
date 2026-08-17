import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
   Scanner sc = new Scanner(System.in);
        String s = sc.next();

        int seen = 0, repeated = 0;

        // First pass: mark duplicates
        for (char c : s.toCharArray()) {
            int bit = 1 << (c - 'a');
            if ((seen & bit) != 0) {
                repeated |= bit;
            } else {
                seen |= bit;
            }
        }

        // Second pass: print duplicates in order of first repeat
        seen = 0;
        for (char c : s.toCharArray()) {
            int bit = 1 << (c - 'a');
            if ((repeated & bit) != 0 && (seen & bit) == 0) {
                System.out.print(c + " ");
                seen |= bit;
            }
        }
    
    }
}
