import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {

		Scanner Scan = new Scanner(System.in);		
		
		ArrayList<ArrayList<Integer>> nlist = new ArrayList<ArrayList<Integer>>();	
		int n=2;
				
		while(n!=0) {
			
			n=Scan.nextInt();
			
			if(n>0) {
				String breaking= Scan.nextLine();
			
				String line= Scan.nextLine();
				ArrayList<Integer> integerline = new ArrayList<Integer>();
			
				String[] secuencia = line.split(" ");
				for(int x=0;x<secuencia.length;x++) {
					integerline.add(Integer.valueOf(secuencia[x]));
				}
				nlist.add(integerline);
			}
		}
		
		for(int z=0;z<nlist.size();z++) {
			
			int count=0;
			boolean alarm=false;
			
			ArrayList<Integer> finalline = nlist.get(z);
			
				for(int y=0;y<finalline.size();y++) {
					
					if(finalline.get(y)<=4 && !alarm) {
						
						count++;
						alarm=true;
					}else if(finalline.get(y)>6 ) {
						alarm=false;
					}
				}
				
				System.out.println(count);
		}
	}
}
