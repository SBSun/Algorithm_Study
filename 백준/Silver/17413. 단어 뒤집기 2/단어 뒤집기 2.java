import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		Stack<Character> stack = new Stack<>();

        String S = br.readLine();
        boolean isTag = false;

        for(int i = 0; i < S.length(); i++){
            char c = S.charAt(i);
            // 태그의 시작 표시
            if(c == '<'){
                isTag = true;

                while(!stack.empty()){
                    sb.append(stack.pop());
                }
                sb.append(c);
            }
            // 태그의 끝 표시
            else if(c == '>'){
                isTag = false;
                sb.append(c);    
            }
            else if(isTag){
                sb.append(c);
            }
            else if(!isTag){
                if(c == ' '){
                    while(!stack.empty()){
                        sb.append(stack.pop());
                    }
                    sb.append(c);
                }
                else{
                    stack.push(c);
                }
            }
        }

        // 마지막으로 저장되어 있는 문자열 추가
        while(!stack.isEmpty()) {
			sb.append(stack.pop());
		}
		
		System.out.println(sb);
    }
}