import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String n = br.readLine();
        long sum = 0;

        char[] charArr = n.toCharArray();
        Arrays.sort(charArr);

        StringBuilder sb = new StringBuilder();
        int len = charArr.length;

        if(charArr[0] != '0'){
            System.out.println(-1);
			return;
        }

        for(int i = len - 1; i >= 0; i--){
            int num = charArr[i] - '0';
			sum += num;
			sb.append(num);
        }

        // 30의 배수인지 판단하기 위한 조건 생성
		if(charArr[0] != '0' || sum % 3 != 0) {	// 만약 3의 배수가 아니라면
			System.out.println(-1);
			return;
		}
		
		System.out.println(sb.toString());
    }
}