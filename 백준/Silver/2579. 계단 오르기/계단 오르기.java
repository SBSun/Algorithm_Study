import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[301]; 
        int[] dp = new int[301];

        for(int i = 1; i <= n; i++){
            nums[i] = Integer.parseInt(br.readLine());   
        }
        
        dp[1] = nums[1];
        dp[2] = nums[1] + nums[2];
        dp[3] = Math.max(nums[1], nums[2]) + nums[3];

        for (int i = 4; i <= n; i++) {
            // (i - 3)번을 밟고 (i - 1)번 계단을 밝고 오는 경우와 (n - 2)번 계단을 밟고 i번째 계단에 도달하는 경우 2가지가 존재
            dp[i] = Math.max(dp[i - 3] + nums[i - 1], dp[i - 2]) + nums[i];
        }

        System.out.print(dp[n]);
    }
}