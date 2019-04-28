package exer1.pc3;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;


public class Principal {
	public static void main(String args[]) {
	
		List<String> l1 = new ArrayList<String>();
			for(int i = 0 ; i < 200 ; i++) {
				l1.add(gen_string());
			}
		System.out.println(l1);
	}

public static String gen_string() {
	String possible = "ABCDEFGHIJKLMNOPQRSTUVXYZ0123456789";
	StringBuilder st = new StringBuilder();
	Random r = new Random();
	
		 for(int j = 0 ; j < 4 ; j++ ) {
			 st.append(possible.charAt(r.nextInt(possible.length())));
		 }
		 return st.toString();
	}
}