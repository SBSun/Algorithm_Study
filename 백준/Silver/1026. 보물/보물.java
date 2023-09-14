import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();
        StringTokenizer st1 = new StringTokenizer(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());

        for(int i = 0; i < n; i++){
            a.add(Integer.parseInt(st1.nextToken()));
            b.add(Integer.parseInt(st2.nextToken()));
        }

        Collections.sort(a);

        int res = 0;
        for(int i = 0; i < n; i++){
            int max = Collections.max(b);
            res += a.get(i) * max;

            b.remove(Integer.valueOf(max));
        }

        System.out.println(res);
    }
}