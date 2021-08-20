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
		    long n=fs.nextLong();
		    
		    System.out.print(n+" ");
		    
		    while(n!=1){
		        if(n%2==1) n=3*n+1;
		        else n/=2;
		        System.out.print(n+" ");
		    }
		    
		}
	}
	
	static final Random random=new Random();
	
	static void ruffleSort(int[] a) {
		int n=a.length;//shuffle, then sort 
		for (int i=0; i<n; i++) {
			int oi=random.nextInt(n), temp=a[oi];
			a[oi]=a[i]; a[i]=temp;
		}
		Arrays.sort(a);
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
