import java.util.ArrayList;
import java.util.Scanner;

public class D {

		public static void main(String[] args) {

		Scanner Scan = new Scanner(System.in);	
		ArrayList<Integer> listacopias = new ArrayList<Integer>();		
		int casos=Scan.nextInt();		
		
		for(int x=0; x<casos; x++) {
			listacopias.add(Scan.nextInt());
		}
			
		for(int y=0; y<listacopias.size(); y++) {		
			
      int ncopias=0;	
      
			for(int z=1; z<listacopias.get(y); z*=2) {
				ncopias++;
			}			     
			System.out.println(ncopias);
      
		}
	}
}
