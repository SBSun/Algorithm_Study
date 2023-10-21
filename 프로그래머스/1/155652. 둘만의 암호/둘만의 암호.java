class Solution {
    public String solution(String s, String skip, int index) {
        String answer = "";
        boolean[] skipArray = new boolean[26];
        char[] array = new char[26];

        // skip 대상인 알파벳인지 판별하기 위해
        char[] skipChars = skip.toCharArray();
        for(char c : skipChars){
            skipArray[c - 'a'] = true;
        }


        for(int i = 0; i < 26; i++){
            int cnt = 0;
            char c = (char)('a' + i);
            int nextIdx = i;
            while(true){
                
                nextIdx++;
      
                // 알파벳이 넘어가면 0으로 초기화
                if(nextIdx == 26)
                    nextIdx = 0;

                // 스킵 알파벳이 아니면 횟수 추가
                if(!skipArray[nextIdx])
                    cnt++;

                // cnt와 index가 같으면 nextIdx를 사용하여 바뀐 알파벳 설정
                if(cnt == index){
                    array[i] = (char)('a' + nextIdx);
                    break;
                }
            }
        }

        for(char c : s.toCharArray()){
            answer += array[c - 'a'];
        }

        return answer;
    }
}