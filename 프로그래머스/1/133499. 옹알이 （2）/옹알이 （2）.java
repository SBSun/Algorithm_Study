class Solution {
    public int solution(String[] babbling) {
        int answer = 0;

        for(String str : babbling){
            // 연속해서 같은 발음 X
            if(str.contains("ayaaya") || str.contains("yeye") || str.contains("woowoo") || str.contains("mama"))
                continue;

            // 각 발음들을 " "로 치환
            str = str.replaceAll("aya", " ");
            str = str.replaceAll("ye", " ");
            str = str.replaceAll("woo", " ");
            str = str.replaceAll("ma", " ");
            str = str.replaceAll(" ", "");

            if(str.length() == 0)
                answer++;
        }

        return answer;
    }
}