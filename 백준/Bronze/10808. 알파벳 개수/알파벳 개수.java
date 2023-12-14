import java.io.*;
import java.util.*;

class Main {
    public static String s;
    public static int[] cnt = new int[26];

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        s = br.readLine();

        for(int i = 0; i < s.length(); i++) {
            cnt[s.charAt(i) - 'a']++;
        }

        for(int n : cnt) {
            System.out.print(n + " ");
        }
    }
}