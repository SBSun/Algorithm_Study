import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[][] nums = new int[n+1][n+1];
        int[][] dp = new int[n+1][n+1];

        for(int i = 1; i <= n; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            for(int j = 1; j <= i; j++){
                nums[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                // i번째 층의 j번째 수의 왼쪽 대각선 위, 오른쪽 대각선 위의 최대합 중에 큰 값과 현재 수를 더한 값을 대입
                dp[i][j] = Math.max(dp[i-1][j-1], dp[i-1][j]) + nums[i][j];
            }
        }

        int max = Integer.MIN_VALUE;

        // 삼각형 최하층에 n개 저장되어 있는 최대합 값들 중에 max값 구하기 
        for(int i = 1; i <= n; i++){
            if(dp[n][i] > max)
                max = dp[n][i];
        }

        System.out.print(max);
    }
}