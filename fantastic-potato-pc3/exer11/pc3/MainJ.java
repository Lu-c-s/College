/*Adicione os números 100, 20, 200, 30, 80, 40, 100, 200 a um Set,
percorra todos os elementos utilizando for-enhanced (for-each) e
calcule a média.*/

package exer11.pc3;

import java.util.Arrays;
import java.util.HashSet;

public class MainJ {
	public static void main(String args[]) {
	HashSet<Integer> hs = new HashSet<>();
	hs.addAll(Arrays.asList(100, 20, 200, 30, 80, 40, 100, 200));
	int total = 0;
	for(int in : hs) {
		total = total + in;
	}
	total = total/ hs.size();
	System.out.println("Media = "+total);
	}
}
