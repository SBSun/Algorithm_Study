import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int X = Integer.parseInt(br.readLine());
        int count = 0;
        int line = 0;
        int deno = 0;  // 분모
        int numer = 0; // 분자

        // 몇 번쨰 수열인지 계산
        while(count < X){
            line++;
            count += line;
        }

        if(line % 2 == 0){ // 짝수 라인
            numer = line + X - count;
            deno = 1 + count - X;
        }else{ // 홀수 라인
            numer = 1 + count - X;
            deno = line + X - count;
        }

        System.out.println(numer  + "/" + deno);
    }
}