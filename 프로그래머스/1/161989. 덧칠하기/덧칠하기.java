class Solution {
    public int solution(int n, int m, int[] section) {
        int answer = 1;
        int start = section[0];
        int end = start + (m - 1);

        for(int s : section){
            // 룰러 범위 내라면 패스
            if(s >= start && s <= end)
                continue;
            else{ // 범위 밖이라면 룰러 범위 재설정 및 횟수 추가
                start = s;
                end = s + (m - 1);
                answer++;
            }
        }

        return answer;
    }
}