import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] minus_split = br.readLine().split("-");
        List<Integer> nums = new ArrayList<>();
        
        for(int i = 0; i < minus_split.length; i++){
            int sum = 0;
            String[] plus_split = minus_split[i].split("\\+");

            for(int j = 0; j < plus_split.length; j++){
                sum += Integer.parseInt(plus_split[j]);
            }

            nums.add(sum);
        }
        
        int res = nums.get(0);

        for(int i = 1; i < nums.size(); i++){
            res -= nums.get(i);
        }

        System.out.println(res);
    }
}