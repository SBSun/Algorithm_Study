import java.io.*;
import java.util.*;

class Pair<L, R> {
    L first;
    R second;

    public Pair(L first, R second) {
        this.first = first;
        this.second = second;
    }
}

class Main {
    public static int[] array;
    public static List<Integer> result = new ArrayList<Integer>();
    public static Pair<Integer, Integer> pair;
    public static int sum = 0;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        array = new int[9];

        // 9명 중에 7명을 뽑는다 -> 9C7
        // 7명의 합이 100이여야 하기 때문에 2명을 뺀 7명의 합이 100이면 된다.
        for(int i = 0; i < 9; i++){
            array[i] = Integer.parseInt(br.readLine());
            sum += array[i];
        }

        solve();

        for(int i = 0; i < 9; i++) {
            // 가짜 난쟁이는 패스
            if(pair.first == array[i] || pair.second == array[i])
                continue;
                
            // 진짜 난쟁이
            result.add(array[i]);
        }

        Collections.sort(result);

        for(int num : result) {
            System.out.println(num);
        }
    }

    public static void solve() {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < i; j++) {
                // 가짜 난쟁이 2명 찾기
                if(sum - array[i] - array[j] == 100) {
                    pair = new Pair<Integer, Integer>(array[i], array[j]);
                    return;
                }
            }
        }
    }
}