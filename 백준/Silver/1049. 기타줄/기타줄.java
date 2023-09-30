import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());

        int set = 1000;
		int single = 1000;

        // 세트 가격과 낱개 가격의 최솟값을 저장
        for(int i = 0; i < M; i++){
			st = new StringTokenizer(br.readLine());
			set = Math.min(set, Integer.parseInt(st.nextToken()));
			single = Math.min(single, Integer.parseInt(st.nextToken()));
        }

        int res = 0;

        res = Math.min((N / 6 + 1) * set, N * single);
        res = Math.min(res, (N % 6) * single + (N / 6) * set);

        System.out.println(res);
    }
}