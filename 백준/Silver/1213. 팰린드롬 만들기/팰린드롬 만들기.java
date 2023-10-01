import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringBuilder front = new StringBuilder();
        StringBuilder end = new StringBuilder();
        int oddCheck = 0;
        char mid = '0';
        boolean flag = true;
        int[] alphabet = new int[26];
        String name = br.readLine();


        // 알파벳 개수 구하기
        for(int i = 0; i < name.length(); i++){
            alphabet[name.charAt(i) - 65]++;
        }

        for(int i = 0; i < alphabet.length; i++){
            // 알파벳 개수가 홀수일 때
            if(alphabet[i] % 2 == 1){
                if(oddCheck == 0){
                    oddCheck++;
                    mid = (char)('A' + i);
                }else{ // 홀수가 2개 이상면 팰린드롬을 만들 수 없다.
                    flag = false;
                    sb = new StringBuilder("I'm Sorry Hansoo");
                    break;
                }
            }

            for(int j = 0; j < alphabet[i] / 2; j++){
                front.append((char)('A' + i));
                end.insert(0, (char)('A' + i));
            }
        }

        if(flag){
            if(mid == '0'){
                sb.append(front).append(end);
            }else{
                sb.append(front).append(mid).append(end);
            }
        }

        System.out.println(sb.toString());
    }
}