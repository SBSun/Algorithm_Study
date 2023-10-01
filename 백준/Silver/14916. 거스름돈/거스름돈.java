import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        int res = 0;

        while(n > 0){
            if(n % 5 == 0){
                res += n / 5;
                System.out.println(res);
                return;
            }else{
                n -= 2;
                res += 1;
            }
        }

        if(n == 0){
            System.out.println(res);
        }else{
            System.out.println(-1);
        }
    }
}