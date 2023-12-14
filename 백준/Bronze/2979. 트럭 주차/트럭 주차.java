import java.io.*;
import java.util.*;

class Main {
    public static int a, b, c;
    public static int[] cnt = new int[101];
    public static int sum = 0;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        a = Integer.parseInt(st.nextToken());
        b = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());

        for(int i = 0; i < 3; i++) {
            st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());

            for(int j = start; j < end; j++) {
                cnt[j]++;
            }
        }

        for(int i = 1; i < 100; i++) {
            if(cnt[i] > 0) {
                if(cnt[i] == 1)
                    sum += a;
                else if(cnt[i] == 2)
                    sum += b * 2;
                else if(cnt[i] == 3)
                    sum += c * 3;
            }
        }

        System.out.println(sum);
    }
}