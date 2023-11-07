import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int dp[] = new int[11];
		int t = Integer.parseInt(br.readLine());
		
		// 점화식 : dp[n] = dp[n-1] + dp[n-2] + dp[n-3]

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for(int i = 4; i < 11; i++){
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		while(t-- > 0){
			int n = Integer.parseInt(br.readLine());
			System.out.println(dp[n]);
		}
    }
}