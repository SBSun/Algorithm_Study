import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        while(T-- > 0){
            StringTokenizer st = new StringTokenizer(br.readLine());

            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());

            LinkedList<int[]> q = new LinkedList<>();	
			st = new StringTokenizer(br.readLine());
            
            for(int i = 0; i < N; i++){
                q.offer(new int[]{i, Integer.parseInt(st.nextToken())});
            }

            int count = 0; // 횟수

            while(!q.isEmpty()){

                int[] front = q.poll(); // 첫 원소
                boolean isMax = true;

                // 큐에 남아있는 원소들과 중요도 비교
                for(int i = 0; i < q.size(); i++){
                    // 처음 뽑은 원소보다 큐에 있는 i번째 원소가 중요도가 클 경우 
                    if(front[1] < q.get(i)[1]){

                        // 뽑은 원소 및 i 이전의 원소들을 뒤로 보낸다.
                        q.offer(front);
                        for(int j = 0; j < i; j++){
                            q.offer(q.poll());
                        }

                        // front원소가 가장 큰 원소가 아니였으므로 false를 하고 반복문 탈출
						isMax = false;
						break;
                    }
                }

                // front 원소가 가장 큰 원소가 아니였으므로 다음 반복문으로 넘어감
				if(isMax == false) {
					continue;
				}
				
				// front 원소가 가장 큰 원소였으므로 해당 원소는 출력해야하는 문서다.
				count++;
				if(front[0] == M) {	// 찾고자 하는 문서라면 해당 테스트케이스 종료
					break;
				}
            }

            System.out.println(count);
        }
    }
}