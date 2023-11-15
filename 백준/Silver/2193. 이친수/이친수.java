import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        long[] dp = new long[91];

        dp[1] = 1;
        dp[2] = 1;

        for(int i = 3; i <= n; i++){
            // i번째에 0이 오는 경우 = i-1번째는 0 또는 1이 오는 경우니까 i-1번째 경우의 수와 같다. 
            // i번째에 1이 오는 경우 = i-1번째는 반드시 0이 와야하고, i-2번째는 0 또는 1이 오니까 i-2번째 경우의 수와 같다.
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        System.out.print(dp[n]);
    }
}