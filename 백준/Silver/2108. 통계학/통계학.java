import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int sum = 0;  
        int avg = 0;
        int median = 0;
        int mode = 0;
        int range = 0;
        int[] arr = new int[N];

        for(int i = 0; i < N; i++){
            arr[i] = Integer.parseInt(br.readLine());
            sum += arr[i];
        }

        // 평균값
        avg = (int)Math.round((double)sum / N);

        Arrays.sort(arr);

        // 중앙값
        median = arr[N / 2];

        // 최빈값
        int[] plus = new int[4002];
        int[] minus = new int[4001];

        for(int i = 0; i < N; i++){
            if(arr[i] < 0)
                minus[Math.abs(arr[i])]++;
            else
                plus[arr[i]]++;
        }

        ArrayList<Integer> modeList = new ArrayList<>();
        int max = 0;
        for(int i = 0; i < plus.length; i++){
            max = Math.max(max, plus[i]);
        }
        
        for(int i = 0; i < minus.length; i++){
            max = Math.max(max, minus[i]);
        }

        // 가장 빈도 높은 수들을 따로 리스트에 추가
        for(int i : arr){
            if(i < 0){
                if(minus[Math.abs(i)] == max && !modeList.contains(i)){
                    modeList.add(i);
                }
            }
            else{
                if(plus[i] == max && !modeList.contains(i)){
                    modeList.add(i);
                }
            }
        }

        if(modeList.size() > 1){
            mode = modeList.get(1);
        }
        else{
            mode = modeList.get(0);
        }

        // 범위
        range = arr[N - 1] - arr[0];

        System.out.println(avg + "\n" + median + "\n" + mode + "\n" + range);

    }
}