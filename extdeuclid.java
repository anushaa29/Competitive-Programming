import java.io.*;
import java.util.*;

public class extdeuclid{

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
      {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();

        int s1 = 1, s2 = 0;
        int t1 = 0, t2 = 1;

        while (b != 0) {
            int q = a / b;
            int r = a % b;

            int s = s1 - s2 * q;
            int t = t1 - t2 * q;

            a = b;
            b = r;

            s1 = s2;
            s2 = s;
            t1 = t2;
            t2 = t;
        }

        System.out.println(+ s1 + " " + t1+" "+a);
    }
}}
 
