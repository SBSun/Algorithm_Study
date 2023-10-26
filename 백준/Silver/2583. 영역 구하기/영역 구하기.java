import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {

    final static int mapSize = 101;
    final static int[] dy = new int[] {-1, 0, 1, 0};
    final static int[] dx = new int[] {0, 1, 0, -1};

    static int M, N, K;
    static boolean[][] visited = new boolean[mapSize][mapSize];
    static int[][] array = new int[mapSize][mapSize];
    static ArrayList<Integer> result = new ArrayList<Integer>();
    
    static int dfs(int startY, int startX){
        visited[startY][startX] = true;
        int res = 1;
 
        for(int i = 0; i < 4; i++){
            int nextY = startY + dy[i];
            int nextX = startX + dx[i];

            if(nextY < 0 || nextX < 0 || nextY >= M || nextX >= N)
                continue;

            if(visited[nextY][nextX])
                continue;

            if(array[nextY][nextX] == 0){
                res += dfs(nextY, nextX);
            }
        }

        return res;
    }
    

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        M = Integer.parseInt(st.nextToken()); 
        N = Integer.parseInt(st.nextToken()); 
        K = Integer.parseInt(st.nextToken());

        for(int i = 0; i < K; i++){
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

            for(int x = x1; x < x2; x++){
                for(int y = y1; y < y2; y++){
                    array[y][x] = 1;
                }
            }
        }

        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(array[i][j] != 1 && !visited[i][j]){
                    result.add(dfs(i, j));
                }
            }
        }

        Collections.sort(result);

        StringBuilder sb = new StringBuilder();
        sb.append(result.size() + "\n");

        for(int i = 0; i < result.size(); i++){
            sb.append(result.get(i) + " ");
        }

        System.out.println(sb);
    }
}