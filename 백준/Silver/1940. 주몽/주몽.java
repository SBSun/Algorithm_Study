import java.io.*;
import java.util.*;

class Main {
    public static int n, m, cnt = 0;
    public static int[] a = new int[15001];

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        m = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        for(int i = 0; i < n; i++) {
            int num = Integer.parseInt(st.nextToken());
            a[i] = num;
        } 

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                // 두 고유 번호를 더한 값이 m과 같으면 갑옷을 만들 수 있다.
                if(a[i] + a[j] == m)
                    cnt++;
            }
        }

        System.out.println(cnt);
    }
}