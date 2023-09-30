import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());

        int[] positions = new int[N];
        st = new StringTokenizer(br.readLine());

        for(int i = 0; i < N; i++){
            positions[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(positions);

        int res = 1;
        int start = positions[0];

        for(int i = 1; i < N; i++){
            // 물이 새는 곳 시작점과 현재 위치의 길이가 테이프 길이보다 같거나 크면
            if(positions[i] - start >= L){
                start = positions[i];
                res++;
            }
        }

        System.out.println(res);
    }
}