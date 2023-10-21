class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        int idx1 = 0;
        int idx2 = 0;

        for(String word : goal){
            if(cards1[idx1].equals(word)){
                idx1 = (idx1 == cards1.length - 1) ? idx1 : ++idx1;
            }else if(cards2[idx2].equals(word)){
                idx2 = (idx2 == cards2.length - 1) ? idx2 : ++idx2;
            }else{
                return "No";
            }
        }

        return "Yes";
    }
}