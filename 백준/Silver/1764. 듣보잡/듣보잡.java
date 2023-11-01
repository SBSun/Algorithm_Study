import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        HashSet<String> set = new HashSet<>();
        List<String> list = new ArrayList<String>();

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        for(int i = 0; i < N; i++){
            set.add(br.readLine());
        }

        for(int i = 0; i < M; i++){
            String str = br.readLine();
            if(set.contains(str)){
                list.add(str);
            }
        }

        Collections.sort(list);

        System.out.println(list.size());
        for(String str : list){
            System.out.println(str);
        }
    }
}