import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class Main {
    
	public static void main(String[] args) {
		CP fs=new CP();
		int T=1;
		//T=fs.nextInt();
		while(T-->0) {
		    int x1=0,x2=0;
		    
		    int n=fs.nextInt();
		    for(int i=0;i<n-1;++i)
		        x1^=fs.nextInt();
		        
		    for(int i=1;i<=n;++i)
		        x2^=i;
		        
		    System.out.print(x1^x2);
		}
	}
	
	static class CP {
	    
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st=new StringTokenizer("");
		String next() {
			while (!st.hasMoreTokens())
				try {
					st=new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			return st.nextToken();
		}
		
		int nextInt() {
			return Integer.parseInt(next());
		}
		
		int[] readArray(int n) {
			int[] a=new int[n];
			for (int i=0; i<n; i++) a[i]=nextInt();
			return a;
		}
		
		long nextLong() {
			return Long.parseLong(next());
		}
	}
	
}
