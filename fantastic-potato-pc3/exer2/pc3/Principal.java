package exer2.pc3;

import java.util.ArrayList;
import java.util.List;

public class Principal {
	public static void main(String args[]) {
		List<String> l1 = new ArrayList<String>();
		
		for(int i = 1 ; i <= 3 ; i++) {
			l1.add("String "+ i);
		}
		for(int i = 1 ; i <= 3 ; i++) {
			l1.add("String "+ i);
		}
		for(String f : l1) {
			System.out.println(f);
		}
		System.out.println("tamanho :" + l1.size());
	}
}
