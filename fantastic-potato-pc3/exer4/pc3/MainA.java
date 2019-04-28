package exer4.pc3;

import java.util.ArrayList;
import java.util.List;
import java.util.Collections;

public class MainA {
	public static void main(String args[]) {
		List<String> l1 = new ArrayList<String>();
		
		for(int i = 1 ; i <= 3 ; i++) {
			l1.add("String "+ i);
		}
		for(int i = 1 ; i <= 3 ; i++) {
			l1.add("String "+ i);
		}
		System.out.println(l1);
		System.out.println(Collections.binarySearch(l1,"String 2"));
}
}
