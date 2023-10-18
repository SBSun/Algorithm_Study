import java.util.Arrays;

class Solution {
    public int[] solution(String[] keymap, String[] targets) {
                int[] answer = new int[targets.length];
        int[] minCountArray = new int[26];
        // keymap에 알파벳이 존재하는지 파악하기 위해 101로 초기화
        Arrays.fill(minCountArray, 101);

        // 각 알파벳을 사용하기 위해 최소 몇 번을 눌러야하는지 계산하여 저장
        for(String key : keymap){
            char[] charArray = key.toCharArray();
            for(int i = 0; i < charArray.length; i++){
                if(minCountArray[charArray[i] - 'A'] > i){
                    minCountArray[charArray[i] - 'A'] = i + 1;
                }
            }
        }
        
        for(int i = 0; i < targets.length; i++){
            char[] targetArray = targets[i].toCharArray();
            int cnt = 0;

            // target을 작성하기 위해 눌러야 하는 최솟값을 구하기 위해, minCountArray에서 각 알파벳의 최솟값을 더해준다.
            for(int j = 0; j < targetArray.length; j++){
                int minCount = minCountArray[targetArray[j] - 'A'];

                // 해당 알파벳이 keymap에 존재하지 않는다면 target을 작성하지 못하기 때문에 -1 저장
                if(minCount == 101){
                    cnt = 0;
                    break;
                }
                
                cnt += minCount;
            }

            answer[i] = (cnt == 0) ? -1 : cnt;
        }

        return answer;
    }
}