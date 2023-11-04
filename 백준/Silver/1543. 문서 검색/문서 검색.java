import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
        String docs = br.readLine();
        String word = br.readLine();

        int docsLength = docs.length();

        // 문서에 포함된 단어들을 제거
        docs = docs.replaceAll(word, "");
        // 제거하기 전의 길이와 후의 길이의 차이값을 단어의 길이로 나눠주면 횟수를 구할 수 있다.
        System.out.println((docsLength - docs.length()) / word.length());
    }
}