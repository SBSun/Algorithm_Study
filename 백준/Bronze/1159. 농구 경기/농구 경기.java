import java.io.*;
import java.util.*;

class Main {
    public static int n;
    public static int[] cnt = new int[26];

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            String name = br.readLine();
            cnt[name.charAt(0) - 'a']++;
        }

        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < 26; i++) {
            if(cnt[i] >= 5) {
                sb.append((char)('a' + i));
            }
        }

        if(sb.length() == 0)
            System.out.println("PREDAJA");
        else
            System.out.println(sb.toString());
    }
}