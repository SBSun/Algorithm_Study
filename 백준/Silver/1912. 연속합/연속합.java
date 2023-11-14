import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] nums = new int[n + 1];
        int[] cur_max = new int[n + 1]; 
        int[] total_max = new int[n + 1];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 1; i <= n; i++){
            nums[i] = Integer.parseInt(st.nextToken());
        }

        cur_max[1] = nums[1];
        total_max[1] = nums[1];
        
        // i번째 수를 포함하는 연속합과 i-1번째의 최대 연속합을 비교
        
        for(int i = 2; i <= n; i++){
            // i번째 수를 포함하는 최대 연속합 = (i-1번째 최대 연속합 + i번째 수)와 i번째 수 중에 큰 값을 대입    
            cur_max[i] = Math.max(cur_max[i - 1] + nums[i], nums[i]);
            // i번째 최대 연속합 = i-1번째 최대 연속합과 현재 연속합 중에 큰 값을 대입
            total_max[i] = Math.max(total_max[i - 1], cur_max[i]); 
        }

        System.out.print(total_max[n]);
    }
}