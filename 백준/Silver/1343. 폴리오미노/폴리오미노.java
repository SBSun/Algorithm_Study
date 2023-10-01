import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String A = "AAAA";
        String B = "BB";
        String str = br.readLine();

        str = str.replaceAll("XXXX", A);
        str = str.replaceAll("XX", B);

        if(str.contains("X")){
            str = "-1";
        }

        System.out.println(str);
    }
}