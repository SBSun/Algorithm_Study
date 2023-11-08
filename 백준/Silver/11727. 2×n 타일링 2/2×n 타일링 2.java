import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int[] dp = new int[1001];

		// dp[i] = 2xi 크기의 직사각형을 1x2, 2x1, 2x2 타일로 채우는 방법의 수
		dp[1] = 1;
		dp[2] = 3;

		for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
        }
        System.out.println(dp[n]);
    }
}