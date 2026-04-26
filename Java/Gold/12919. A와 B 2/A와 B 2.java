import java.util.*;
import java.io.*;

public class Main {

    public static String A;
    public static String B;
    public static int ans;

    public static String reverseString(String S){
        String str = "";
        for(int i = S.length()-1; i>=0;i--){
            str = str + S.charAt(i);
        }
        return str;
    }

    public static void dfs(String S, String T){
        if(S.equals(T) || ans == 1) {
            ans = 1;
        }
        else if (T.length() == 1){
            ans = 0;
        }
        else {
            if(T.charAt(T.length()-1) == 'A'){
                dfs(S, T.substring(0, T.length()-1));
            }
            if(T.charAt(0) == 'B'){
                dfs(S, reverseString(T.substring(1)));
            }
        }
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        A = br.readLine();
        B = br.readLine();
        int a = A.length();
        int b = B.length();
        ans = 0;
        if(b < a) {
            System.out.println(0);
        }
        else if (b == a && !A.equals(B)) {
            System.out.println(0);
        }
        else {
            dfs(A, B);
            System.out.println(ans);
        }
    }
}