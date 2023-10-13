import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        Stack<Integer> stack = new Stack<>();

        for(int i = 0; i < N; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            String s = st.nextToken();
            if(s.equals("push")){
                stack.push(Integer.parseInt(st.nextToken()));
            }else if(s.equals("pop")){
                System.out.println(stack.empty() ? "-1" : stack.pop()); 
            }else if(s.equals("size")){
                System.out.println(stack.size()); 
            }
            else if(s.equals("empty")){
                System.out.println(stack.empty() ? "1" : "0"); 
            }
            else if(s.equals("top")){
                System.out.println(stack.empty() ? "-1" : stack.peek()); 
            }
        }
    }
}