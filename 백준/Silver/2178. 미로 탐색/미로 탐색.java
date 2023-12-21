import java.io.*;
import java.util.*;

class Main {
    static final int maxSize = 104;
    static int n, m;
    static int[] dx = { -1, 1, 0, 0 }; //x방향배열-상하
    static int[] dy = { 0, 0, -1, 1 }; //y방향배열-좌우
    static int[][] map = new int[maxSize][maxSize];
    static boolean[][] visited = new boolean[maxSize][maxSize];

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        for(int i = 0; i < n; i++) {
            String s = br.readLine();
            for(int j = 0; j < m; j++) {
                map[i][j] = s.charAt(j) - '0';
            }
        }
        
        visited[0][0] = true;
		bfs(0, 0);
		System.out.println(map[n-1][m-1]);
    }

    public static void bfs(int x, int y) {
		Queue<int[]> q = new LinkedList<>();
		q.add(new int[] {x,y});
		
		while(!q.isEmpty()) {
			int cur[] = q.poll();
			int curX = cur[0];
			int curY = cur[1];
			
			for(int i=0; i<4; i++) {
				int nextX = curX + dx[i];
				int nextY = curY + dy[i];
				
                if (nextX < 0 || nextY < 0 || nextX >= n || nextY >= m)
                    continue;
                if (visited[nextX][nextY] || map[nextX][nextY] == 0)
                    continue;
            
                q.add(new int[] {nextX, nextY});
                map[nextX][nextY] = map[curX][curY] + 1;
                visited[nextX][nextY] = true;
			}
		}
	}
}