import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		
		long first = 0;
		long second = 0;
		st = new StringTokenizer(br.readLine());
		for(int i = 1; i<=3;i++) {
			first += Integer.parseInt(st.nextToken()) * i;
		}
		st = new StringTokenizer(br.readLine());
		for(int i = 1; i <=3;i++) {
			second += Integer.parseInt(st.nextToken()) * i;
		}
		
		if(first > second) {
			System.out.println(1);
		}
		else if(first < second) {
			System.out.println(2);
		}
		else {
			System.out.println(0);
		}
	}
}