import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String s = br.readLine();
        char[] charArr = s.toCharArray();

        int cnt0 = 0;
        int cnt1 = 0;

        if(charArr[0] == '0'){
            cnt1 = 1;
        }else{
            cnt0 = 1;
        }

        for(int i = 1; i < charArr.length; i++){
            if(charArr[i - 1] != charArr[i]){
                if(charArr[i] == '0'){
                    cnt1++;
                }else{
                    cnt0++;
                }
            }
        }
        
        System.out.println(Math.min(cnt0, cnt1));
    }
}