import java.io.*;
import java.util.*;

class Main {
    public static String s;
    public static int[] cnt = new int[200];
    public static int flag = 0;
    public static char mid;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        s = br.readLine();

        // 문자별 개수 카운트
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            cnt[c]++; 
        }

        StringBuilder sb = new StringBuilder();
        // 알파벳 순서대로 팰린드롬을 만들기 위해 'Z' -> 'A' 역순으로
        for(int i = 'Z'; i >= 'A'; i--) {
            if(cnt[i] > 0) {
                // 알파벳 개수가 홀수면 중간 값으로 설정하고 flag 증가 및 개수 차감
                if(cnt[i] % 2 == 1) {
                    mid = (char)i;
                    flag++;
                    cnt[i]--;
                }

                // 홀수가 2개면 팰린드롬을 만들 수 없다.
                if(flag == 2)
                    break;

                // 해당 알파벳을 문자열 양 옆에 추가
                for(int j = 0; j < cnt[i]; j += 2) {
                    sb = sb.insert(0, (char)i);
                    sb.append((char)i);
                }
            }
        }

        // 중간 값이 존재하면 현재 문자열의 중간에 삽입
        if(mid != 0) 
            sb.insert(sb.length() / 2, mid);

        if(flag == 2)
            System.out.println("I'm Sorry Hansoo");
        else
            System.out.println(sb.toString());
    }
}