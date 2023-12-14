import java.io.*;
import java.util.*;

class Main {
    public static String s;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringBuilder sb = new StringBuilder(br.readLine());

        for(int i = 0; i < sb.length(); i++) {
            char c = sb.charAt(i);
            if(c >= 65 && c < 91) {
                if(c + 13 > 90)
                    sb.setCharAt(i, (char)(c + 13 - 26));
                else
                    sb.setCharAt(i, (char)(c + 13));
            } else if(c >= 97 && c < 123) {
                if(c + 13 > 122) 
                    sb.setCharAt(i, (char)(c + 13 - 26));
                else
                    sb.setCharAt(i, (char)(c + 13));
            }
        }

        System.out.println(sb.toString());
    }
}