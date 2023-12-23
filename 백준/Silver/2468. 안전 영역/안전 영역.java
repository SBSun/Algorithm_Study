import java.io.*;
import java.util.*;

class Main {
    static int n, cnt, result;
    static int[] dx = { 0, 0, -1, 1 }; // x방향배열-좌우
    static int[] dy = { -1, 1, 0, 0 }; // y방향배열-상하
    static int[][] map;
    static boolean[][] visited;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        map = new int[n][n];
        
        for(int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < n; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        // 높이 0 ~ 100까지 검사
        for(int d = 0; d < 101; d++) {
            // 방문 처리 초기화
            visited = new boolean[n][n];
            cnt = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    // 비의 양 n보다 큰 수 && 방문하지 않은 곳
                    if(map[i][j] > d && !visited[i][j]) {
                        dfs(i, j, d);
                        cnt++;
                    }
                }
            }

            result = Math.max(result, cnt);
        }

        System.out.println(result);
    }

    public static void dfs(int y, int x, int depth) {
        // 방문 처리
		visited[y][x] = true;

        for(int i = 0; i < 4; i++) {
            int nextY = y + dy[i];
            int nextX = x + dx[i];

            // 맵을 벗어났거나 이미 방문한 곳이라면 다음 좌표 검사
            if(nextY < 0 || nextX < 0 || nextY >= n || nextX >= n)
                continue;

            // 배추가 존재하는 곳이면 해당 좌표에 대해서 dfs 수행
            if(map[nextY][nextX] > depth && !visited[nextY][nextX]) {
                dfs(nextY, nextX, depth);
            }
        }
	}
}