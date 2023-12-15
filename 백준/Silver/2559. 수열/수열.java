import java.io.*;
import java.util.*;

class Main {
    public static int n, k, result = -10000000;
    public static int[] psum = new int[100001];

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= n; i++) {
            int num = Integer.parseInt(st.nextToken());
            psum[i] = psum[i - 1] + num;
        }

        // 연속된 k일 동안이니까 k부터 시작
        for(int i = k; i <= n; i++) {
            // i번째에서 (i - k)번째 누적합을 뺀 값과 비교
            result = Math.max(result, psum[i] - psum[i - k]);
        }

        System.out.println(result);
    }
}