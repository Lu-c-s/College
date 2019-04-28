/*7. Faça um HashSet e insira as Strings “String 1”, “String 2” e “String
3” cada uma duas vezes, percorra todos os elementos e imprima
(System.out.println()). Observe o resultado. Quantos elementos têm
a coleção?*/

/*3, pois o hashset não adiciona elementos repetidos */
package exer7.pc3;

import java.util.HashSet;

public class MainF {
	public static void main(String args[]) {
	HashSet<String> hs = new HashSet<>();
	
	hs.add("String 1");
	hs.add("String 2");
	hs.add("String 3");
	hs.add("String 1");
	hs.add("String 2");
	hs.add("String 3");
	
	System.out.println(hs);
	}
}
