import java.util.*;

class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        int[] array = new int[26];
        Arrays.fill(array, -1);

        for(int i = 0; i < s.length(); i++){
            char letter = s.charAt(i);
            if(array[letter - 'a'] == -1){
                answer[i] = -1;
            }else{
                answer[i] = i - array[letter - 'a'];
            }

            array[letter - 'a'] = i;
        }

        return answer;
    }
}