import java.io.*;
import java.util.*;

class Main {
    static final int maxSize = 51;
    static int n, m, k, t, cnt;
    static int[] dx = { 0, 0, -1, 1 }; // x방향배열-좌우
    static int[] dy = { -1, 1, 0, 0 }; // y방향배열-상하
    static int[][] map;
    static boolean[][] visited;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        t = Integer.parseInt(br.readLine());

        while(t-- > 0) {
            // 테스트 케이스 초기화
            map = new int[maxSize][maxSize];
            visited = new boolean[maxSize][maxSize];
            cnt = 0;

            st = new StringTokenizer(br.readLine());
            m = Integer.parseInt(st.nextToken());
            n = Integer.parseInt(st.nextToken());
            k = Integer.parseInt(st.nextToken());

            for(int i = 0; i < k; i++) {
                st = new StringTokenizer(br.readLine());
                int x = Integer.parseInt(st.nextToken());
                int y = Integer.parseInt(st.nextToken());

                // 배추 위치
                map[y][x] = 1;
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    // 배추가 있는 곳 && 방문하지 않은 곳
                    if(map[i][j] == 1 && visited[i][j] == false) {
                        dfs(i, j);
                        cnt++;
                    }
                }
            }

            System.out.println(cnt);
        }
    }

    public static void dfs(int y, int x) {
        // 방문 처리
		visited[y][x] = true;

        for(int i = 0; i < 4; i++) {
            int nextY = y + dy[i];
            int nextX = x + dx[i];

            // 맵을 벗어났거나 이미 방문한 곳이라면 다음 좌표 검사
            if(nextY < 0 || nextX < 0 || nextY >= n || nextX >= m || visited[nextY][nextX])
                continue;

            // 배추가 존재하는 곳이면 해당 좌표에 대해서 dfs 수행
            if(map[nextY][nextX] == 1) {
                dfs(nextY, nextX);
            }
        }
	}
}