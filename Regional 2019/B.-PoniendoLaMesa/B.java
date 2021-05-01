import java.util.Scanner;

public class PoniendoLaMesa {

	public static void main(String[] args) {

		Scanner Scan = new Scanner(System.in);
        
		while(true) {
			 			
			int copas=Scan.nextInt();
			
			if(copas==0) break;
		
			if(copas==1)System.out.println(1);
            		else System.out.println(copas-(copas%2));
		}
	}
}
