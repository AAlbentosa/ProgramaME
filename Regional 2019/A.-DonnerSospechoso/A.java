import java.util.Scanner;

public class DonerSospechoso {

	public static void main(String[] args) {

            Scanner Scan = new Scanner(System.in);
            
            int casos=Scan.nextInt();           
            String breakline=Scan.nextLine();
            
            for(int x=0; x<casos; x++) {
            	String input=Scan.nextLine();
            	String[] Kilos= input.split(" ");
            	
            	int n1=Integer.valueOf(Kilos[0]);
                int n2=Integer.valueOf(Kilos[1]);
                
                System.out.println((int)(n1 * 100.0 / (n1+n2)));
            }           
	}
}
