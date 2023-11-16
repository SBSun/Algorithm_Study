import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] periods = new int[n+15];
        int[] prices = new int[n+15];
        int[] dp = new int[n+15];
        int max = 0;

        for(int i = 0; i < n; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            periods[i] = Integer.parseInt(st.nextToken());
            prices[i] = Integer.parseInt(st.nextToken());
        }

        for(int i = 0; i <= n; i++) {
			dp[i] = Math.max(dp[i],max); 
			
			dp[periods[i]+i] = Math.max(dp[periods[i]+i], prices[i] + dp[i]);
			
			max = Math.max(max, dp[i]);
		}

        System.out.print(max);
    }
}