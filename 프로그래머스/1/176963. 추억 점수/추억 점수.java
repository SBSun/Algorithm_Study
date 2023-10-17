import java.util.*;
import java.util.stream.*;

class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {
                int[] answer = {};

        // Map으로 변환
        Map<String, Integer> map = IntStream.range(0, yearning.length)
                .boxed()
                .collect(Collectors.toMap(i -> name[i], i -> yearning[i]));

        // 이후에 0으로 값을 할당
        IntStream.range(yearning.length, name.length)
                .forEach(i -> map.put(name[i], 0));

        answer = Arrays.stream(photo)
            .mapToInt(array -> Arrays.stream(array)
                    .mapToInt(value -> map.getOrDefault(value, 0))
                    .sum())
            .toArray(); 

        return answer;
    }
}