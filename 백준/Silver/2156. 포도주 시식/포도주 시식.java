import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[10001];
        int[] dp = new int[10001];

        for(int i = 1; i <= n; i++){
            nums[i] = Integer.parseInt(br.readLine());
        }

        dp[1] = nums[1];
        dp[2] = nums[1] + nums[2];
        
        for(int i = 3; i <= n; i++){
            // 1. i번째 포도주를 마시지 않는 경우 - OOX
            // 2. i번째 포도주를 마시는 경우 - XOO, OXO
            dp[i] = Math.max(dp[i-1], Math.max(dp[i-2] + nums[i], dp[i-3] + nums[i-1] + nums[i]));
        }

        System.out.print(dp[n]);
    }
}