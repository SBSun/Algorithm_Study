import java.util.Arrays;
import java.util.Collections;

class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        // 내림차순
        Integer[] temp = Arrays.stream(score)
            .boxed()
            .toArray(Integer[]::new);
        Arrays.sort(temp, Collections.reverseOrder());

        for(int i = 0; i < temp.length / m; i++){
            answer += temp[(i * m) + (m - 1)] * m;
        }

        return answer;
    }
}