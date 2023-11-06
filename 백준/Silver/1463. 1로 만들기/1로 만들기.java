import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		int dp[] = new int[n + 1];
		
		for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + 1; // 먼저 1을 빼준다 

            if (i % 2 == 0) 
				// 1을 뺀 값과 2로 나눈 값 중 최솟값을 dp[i]에 저장한다 
				dp[i] = Math.min(dp[i], dp[i / 2] + 1); 
            if (i % 3 == 0) 
				// 1을 뺀 값과 2로 나눈 값 중 최소값인 dp[i] 와 3으로 나눈 값 중 최솟값을 dp[i]에 저장한다 
				dp[i] = Math.min(dp[i], dp[i / 3] + 1); 
        }

		System.out.println(dp[n]);
    }
}