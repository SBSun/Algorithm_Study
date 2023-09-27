import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int t = Integer.parseInt(br.readLine());

        while(t > 0){
            int n = Integer.parseInt(br.readLine());
            int[][] ranks = new int[n][2];

            for(int i = 0; i < n; i++){
                String[] input = br.readLine().split(" ");
                ranks[i][0] = Integer.parseInt(input[0]);    
                ranks[i][1] = Integer.parseInt(input[1]);    
            }

            Arrays.sort(ranks, (o1, o2) -> {
                return o1[0] - o2[0];
            });

            int min = ranks[0][1];
            int cnt = 1;

            for(int i = 1; i < n; i++){
                if(min > ranks[i][1]){
                    min = ranks[i][1];
                    cnt++;
                }
            }

            System.out.println(cnt);

            t--;
        }
    }
}