import java.io.*;
import java.util.*;

class Main {
    public static int n;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String s;
        while((s = br.readLine()) != null) {
            n = Integer.parseInt(s);
            long cnt = 1, result = 1;

            while(true) {
                // 나누어 떨어지면 종료
                if(cnt % n == 0) {
                    System.out.println(result);
                    break;
                } else {
                    // 나머지 모듈러 연산을 사용하여 시간초과 발생 방지
                    cnt = (cnt * 10) + 1;
                    cnt %= n;
                    result++;
                }
            }
        }   
    }
}