import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		int[] arr = new int[n];
		StringTokenizer st;
		st = new StringTokenizer(br.readLine());
		for(int i = 0; i<n;i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		System.out.println(solution(arr));
	}
	
	public static String solution(int[] numbers) {
        int non_zero = 0;
        String[] strArr = new String[numbers.length];
        for(int i = 0; i < numbers.length;i++){
            strArr[i] = Integer.toString(numbers[i]);
            if(numbers[i] != 0){
                non_zero = 1;
            }
        }
        if(non_zero == 0){
            return "0";
        }
        Arrays.sort(strArr,(a, b) -> {
            return (b+a).compareTo(a+b);
        });
        String answer = "";
        for(String str:strArr){
            answer += str;
        }
        return answer;
    }
}