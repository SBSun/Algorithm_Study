import java.io.*;
import java.util.*;

class Main {
    static int n, m, j, l, r, cnt = 0;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

		n = Integer.parseInt(st.nextToken());
		m = Integer.parseInt(st.nextToken());
		j = Integer.parseInt(br.readLine());
		l = 1;

		for(int i = 0; i < j; i++) {
			r = l + m - 1;
			int position = Integer.parseInt(br.readLine());

			// 상자 범위내에 존재할 경우
			if(position >= l && position <= r)
				continue;
			else {
				// 상자 왼쪽에 떨어질 경우
				if(position < l) {
					// 사과를 받기 위해 왼쪽으로 이동해야 하는 횟수
					cnt += (l - position);
					l = position;
				} else {
					// 사과를 받기 위해 오른쪽으로 이동해야 하는 횟수
					l += (position - r);
					cnt += (position - r);
				}
			}
		}

		System.out.println(cnt);
    }
}