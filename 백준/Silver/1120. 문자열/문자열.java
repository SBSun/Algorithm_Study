import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        String A = st.nextToken();
        String B = st.nextToken();

        int result = 50;

        for(int i = 0; i < B.length() - A.length() + 1; i++){
            int cnt = 0;
            for(int j = 0; j < A.length(); j++){
                if(A.charAt(j) != B.charAt(j + i))
                    cnt++;
            }
            
            result = Math.min(result, cnt);
        }

        System.out.println(result);
    }
}