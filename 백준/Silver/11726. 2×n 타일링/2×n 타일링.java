import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int[] dp = new int[1001];

		// dp[i] = 2xi 크기의 직사각형을 1x2, 2x1 타일로 채우는 방법의 수
		dp[1] = 1;	// 2x1
		dp[2] = 2;  // 2x1, 1x2

		for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
        }
        System.out.println(dp[n]);
    }
}