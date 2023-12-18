import java.io.*;
import java.util.*;

class Main {
    public static int n, cnt = 0;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            String str = br.readLine();
            Stack<Character> stack = new Stack<>();

            for(int j = 0; j < str.length(); j++) {
                char c = str.charAt(j);
                
                if(!stack.empty() && stack.peek() == c)
                    stack.pop();
                else
                    stack.push(c);
            }

            if(stack.empty())
                cnt++;
        }
        
        System.out.println(cnt);
    }
}