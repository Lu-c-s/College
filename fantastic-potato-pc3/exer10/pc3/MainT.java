/*Adicione os números 100, 20, 200, 30, 80, 40, 100, 200 a um List,
percorra todos os elementos utilizando um Iterator e calcule a média*/

package exer10.pc3;

import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class MainT {
	public static void main(String args[]) {
		List<Integer> l1 = new LinkedList<>();
		l1.addAll(Arrays.asList(100, 20, 200, 30, 80, 40, 100, 200));
		double total=0;
		Iterator<Integer> it = l1.iterator();
		
		while(it.hasNext()) {
			total = total + it.next();
		}
		total = total/l1.size();
		System.out.println("Media = " + total);
	}
}
