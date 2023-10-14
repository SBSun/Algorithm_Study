import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        boolean[][] arr = new boolean[101][101];

        int n = Integer.parseInt(br.readLine());
        int result = 0;

        while(n-- > 0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            for(int i = x; i < x + 10; i++){
                for(int j = y; j < y + 10; j++){
                    if(!arr[i][j]){
                        arr[i][j] = true;
                        result++;
                    }
                }
            }
        }

        System.out.println(result);
    }
}