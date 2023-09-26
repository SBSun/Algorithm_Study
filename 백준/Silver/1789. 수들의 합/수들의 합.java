import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        long n = Long.parseLong(br.readLine());
        long num = 0;
        long sum = 0;

        while(true){
            num += 1;
            sum += num;

            if(sum > n){
                System.out.println(--num);
                break;
            }
        }
    }
}