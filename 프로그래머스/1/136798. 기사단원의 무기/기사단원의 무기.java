class Solution {
    public int solution(int number, int limit, int power) {
        int[] cnt = new int[number + 1];

        for(int i = 1; i < cnt.length; i++){
            for (int j = 1; j * j <= i; j++) {
                if (j * j == i) 
                    cnt[i]++;
                else if (i % j == 0) 
                    cnt[i] += 2;
                
                if(cnt[i] > limit){
                    cnt[i] = power;
                    break;
                }
            }
        }

        int res = 0;
        for(int i = 1; i <= number; i++){    
            res += cnt[i];
        }

        return res;
    }
}