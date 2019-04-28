package exer3.pc3;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
	public static void main(String args[]) {
	List<String> l1 = new ArrayList<String>();
	for(int i = 1 ; i <= 3 ; i++) {
		l1.add("String "+ i);
	}
	for(int i = 1 ; i <= 3 ; i++) {
		l1.add("String "+ i);
	}
	Collections.shuffle(l1);
	
	System.out.println(l1);
  }
}
