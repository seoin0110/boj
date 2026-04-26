import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        String s = br.readLine();
        int ans = 0;
        for(int i = 0; i < n - 3;i++){
            if((s.substring(i,i+4)).equals("gori")){
                ans = 1;
                break;
            }
        }
        if(ans == 1){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}