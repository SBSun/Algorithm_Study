import java.io.*;
import java.util.*;

class Main {
    public static int n;

    public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            int t = Integer.parseInt(br.readLine());
            HashMap<String, Integer> map = new HashMap<String, Integer>();
            for(int j = 0; j < t; j++) {
                String s = br.readLine();
                String type = s.substring(s.indexOf(" ") + 1);
                map.put(type, map.getOrDefault(type, 0) + 1);
            }

            long result = 1;
            for(String key : map.keySet()) {
                // 각 종류마다 안입는 경우도 존재하므로 1을 더해 곱해준다.
                result *= map.get(key) + 1;
            }

            // 아무것도 안입는 경우는 없으므로 1을 빼준다.
            System.out.println(result - 1);
        }
    }
}