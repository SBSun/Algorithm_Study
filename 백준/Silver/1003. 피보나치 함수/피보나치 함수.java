import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		int[] fibonacci0 = new int[41];
		int[] fibonacci1 = new int[41];

		// 매개 변수가 0인 경우 fibonacci(0) 연산이 1번, fibonacci(1) 연산이 0번 이루어지므로 인덱스 0에 1을, 인덱스 1에 0을 대입
		fibonacci0[0] = 1;
		fibonacci0[1] = 0;
		// 매개 변수가 1인 경우 fibonacci(0) 연산이 0번, fibonacci(1) 연산이 1번 이루어지므로 인덱스 0에 0을, 인덱스 1에 1을 대입
		fibonacci1[0] = 0;
		fibonacci1[1] = 1;

		for(int i = 2; i <= 40; i++){
			fibonacci0[i] = fibonacci0[i - 1] + fibonacci0[i - 2];
			fibonacci1[i] = fibonacci1[i - 1] + fibonacci1[i - 2];
		}

		while(t-- > 0){
			int n = Integer.parseInt(br.readLine());
			System.out.println(fibonacci0[n] + " " + fibonacci1[n]);
		}
    }
}