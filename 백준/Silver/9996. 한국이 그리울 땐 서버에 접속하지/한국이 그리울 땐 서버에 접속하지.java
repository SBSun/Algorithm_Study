import java.io.*;
import java.util.*;

class Main {
    public static int n;
    public static String pattern, pre, suf;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        pattern = br.readLine();

        int pos = pattern.indexOf('*');
        pre = pattern.substring(0, pos);
        suf = pattern.substring(pos + 1);

        for(int i = 0; i < n; i++) {
            String s = br.readLine();
            
            if(s.length() < pre.length() + suf.length())
                System.out.println("NE");
            else {
                if(pre.equals(s.substring(0, pre.length())) && suf.equals(s.substring(s.length() - suf.length())))
                    System.out.println("DA");
                else
                    System.out.println("NE");
            }
        }
    }
}