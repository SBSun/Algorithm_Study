import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		List<String> list = new ArrayList<>();

        String S = br.readLine();
        int length = S.length();

        for(int i = 0; i < length; i++){
            list.add(S.substring(i, length));
        }

        Collections.sort(list);

        for(String s : list){
            System.out.println(s);
        }
    }
}