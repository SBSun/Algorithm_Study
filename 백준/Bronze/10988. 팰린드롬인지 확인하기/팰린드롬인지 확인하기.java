import java.io.*;
import java.util.*;

class Main {
    public static String s;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        s = br.readLine();

        StringBuilder sb = new StringBuilder();

        for(int i = s.length() - 1; i >= 0; i--) {
            sb.append(s.charAt(i));
        }

        if(s.equals(sb.toString()))
            System.out.println(1);
        else
            System.out.println(0);
    }
}