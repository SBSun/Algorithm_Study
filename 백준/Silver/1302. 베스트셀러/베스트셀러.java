import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		HashMap<String, Integer> map = new HashMap<>();

        int n = Integer.parseInt(br.readLine());
        int max = 0;
        while(n-- > 0){
            String name = br.readLine();

            // 키가 존재하지 않으면 1, 존재하면 기존값 + 1
            map.put(name, map.getOrDefault(name, 0) + 1);
            max = Math.max(max, map.get(name));
        }

        List<String> list = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() == max) 
                list.add(entry.getKey());
        }
        Collections.sort(list);

        System.out.println(list.get(0));
    }
}