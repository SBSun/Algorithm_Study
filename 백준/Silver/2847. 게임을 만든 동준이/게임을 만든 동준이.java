import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] scores = new int[N];
        int res = 0;
        
        for(int i = 0; i < N; i++){
            scores[i] = Integer.parseInt(br.readLine());
        }

        for(int i = scores.length - 2; i >= 0; i--){
            int minus = scores[i] - scores[i + 1]; 
            if(minus > 0){
                scores[i] -= minus + 1;
                res += minus + 1;
            }else if(minus == 0){
                scores[i]--;
                res++;
            }
        }

        System.out.println(res);
    }
}