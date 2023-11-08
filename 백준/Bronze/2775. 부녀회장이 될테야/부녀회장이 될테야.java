import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		int[][] dp = new int[15][15];

		// 0층 인원 대입
		for(int i = 1; i <= 14; i++){
			dp[0][i] = i;
		}

		for(int i = 1; i <= 14; i++){
			for(int j = 1; j <= 14; j++){
				// 아래층의 1호 부터 j호까지의 합
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}

		while(t-- > 0){
			int k = Integer.parseInt(br.readLine());
			int n = Integer.parseInt(br.readLine());
			System.out.println(dp[k][n]);
		}
    }
}