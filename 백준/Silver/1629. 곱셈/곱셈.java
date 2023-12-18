import java.io.*;
import java.util.*;

class Main {
    public static long a, b, c;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        a = Integer.parseInt(st.nextToken());
        b = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());

        System.out.println(go(a, b));
    }

    // A와 B의 최대값이 2,147,483,647이기 때문에 A와 B가 최대값이면 21억을 21억번 곱해야합니다.
    // 그러면 범위를 벗어나 오버플로우가 발생합니다.
    public static long go(long a, long b) {
        if(b == 1)
            return a % c;
        
        long result = go(a, b / 2);
        result = (result * result) % c;

        // 홀수일때는 한번 더 곱한다.
        if(b % 2 == 1)
            result = (result * a) % c;

        return result;
    }
}