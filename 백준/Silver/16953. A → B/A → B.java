import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int a = Integer.parseInt(input[0]);
        int b = Integer.parseInt(input[1]);
        int cnt = 1;

        while(true){
            if(a > b){
                System.out.println(-1);
                break;
            }else if(a == b){
                System.out.println(cnt);
                break;
            }

            if(b % 10 == 1){
                b /= 10;
            }else if(b % 2 == 0){
                b /= 2;
            }else{
                System.out.println(-1);
                break;
            }

            cnt++;
        }
    }
}