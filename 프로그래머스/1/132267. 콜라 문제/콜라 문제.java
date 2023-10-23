class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;

        // 보유 중인 빈 병(n)이 a개 미만이면 콜라를 받을 수 없다.
        while(a <= n){
            answer += (n / a) * b;
            n = (n / a) * b + (n % a);
        }

        return answer;
    }
}