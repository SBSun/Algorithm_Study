import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = new int[10];
        String N = br.readLine();
        
        for(int i = 0; i < N.length(); i++){
            int num = Character.getNumericValue(N.charAt(i));

            // 6을 입력했다면 9번째 원소에 횟수 추가
            if(num == 6){
                arr[9]++;
            }else{
                arr[num]++;
            }
        }

        int max = 0;

        for(int i = 0; i < 9; i++){
            max = Math.max(max, arr[i]);
        }
        int nineCount = (arr[9] / 2) + (arr[9] % 2);
        max = Math.max(max, nineCount);

        System.out.println(max);
    }
}