import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[n+1]; 
        int[] dp = new int[n+1];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 1; i <= n; i++){
            nums[i] = Integer.parseInt(st.nextToken());   
            dp[i] = 1;  
        }
        
        int max = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                // 이전 원소들 중 가장 큰 dp값 + 1
                if (nums[i] > nums[j]) 
                    dp[i] = Math.max(dp[i], dp[j]+1);
            }
            max = Math.max(max, dp[i]);  //LIS 길이 구하기
        }

        System.out.print(max);
    }
}