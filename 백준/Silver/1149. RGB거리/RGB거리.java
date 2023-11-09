import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int[][] dp = new int[n + 1][3];

		for (int i = 1; i <= n; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
            int r = Integer.parseInt(st.nextToken());
            int g = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

			// i - 1번째 집이 초록 or 파랑인 경우에 최솟값과 빨강 비용을 더함
            dp[i][0] = Math.min(dp[i - 1][1], dp[i - 1][2]) + r;
			// i - 1번째 집이 빨강 or 파랑인 경우에 최솟값과 초록 비용을 더함
            dp[i][1] = Math.min(dp[i - 1][0], dp[i - 1][2]) + g;
			// i - 1번째 집이 빨강 or 초록인 경우에 최솟값과 파랑 비용을 더함
            dp[i][2] = Math.min(dp[i - 1][0], dp[i - 1][1]) + b;
        }

		// n번째 집의 색이 빨강, 초록, 파랑일 경우마다, n번째 집까지의 합산한 비용 중 최솟값 출력
        System.out.println(Math.min(dp[n][0], Math.min(dp[n][1], dp[n][2])));
    }
}