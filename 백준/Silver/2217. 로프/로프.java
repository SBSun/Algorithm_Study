import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] ropes = new int[n];

        for(int i = 0; i < n; i++){
            ropes[i] = Integer.parseInt(br.readLine());
        }
        
        Arrays.sort(ropes);

        int max = Integer.MIN_VALUE;

        for(int i = 0; i < n; i++){
            max = Math.max(max, ropes[i] * (n - i));
        }

        System.out.println(max);
    }
}