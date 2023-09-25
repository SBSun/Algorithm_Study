import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        long[] roads = new long[n - 1];
        long[] costs = new long[n];
        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 0; i < n - 1; i++){
            roads[i] = Long.parseLong(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < n; i++){
            costs[i] = Long.parseLong(st.nextToken());
        }

        long res = costs[0] * roads[0];
        long m = costs[0];
        
        for(int i = 1; i < n - 1; i++){
            if(m > costs[i])
                m = costs[i];
            
            res += m * roads[i];
        }

        System.out.println(res);
    }
}