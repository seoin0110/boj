import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        long m = Integer.parseInt(st.nextToken());
        long [] array = new long[(int)n];
        for (int i = 0; i < n;i++){
            st = new StringTokenizer(br.readLine());
            array[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(array);
        int left = 0;
        int right = 1;
        long ans = array[n-1] - array[0];
        while (left <= right && right < n){
            if (array[right] - array[left] >= m){
                ans = Math.min(array[right] - array[left], ans);
                left++;
            }
            else {
                right++;
            }
        }

        System.out.println(ans);


    }
}