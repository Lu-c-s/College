/*Adicione os números 100, 20, 200, 30, 80, 40, 100, 200 a um List,
percorra todos os elementos utilizando for-enhanced (for-each) e
calcule a média*/

package exer9.pc3;

import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class MainY {
	public static void main(String args[]) {
		double total=0;
		List<Integer> l1 = new ArrayList<>();
		l1.addAll(Arrays.asList(100, 20, 200, 30, 80, 40, 100, 200));
		
		for(int in : l1) {
			total += in;
		}
		total = total/l1.size();
		System.out.println("Media = "+ total);
	}
}
