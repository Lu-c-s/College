/*7. Fa�a um HashSet e insira as Strings �String 1�, �String 2� e �String
3� cada uma duas vezes, percorra todos os elementos e imprima
(System.out.println()). Observe o resultado. Quantos elementos t�m
a cole��o?*/

/*3, pois o hashset n�o adiciona elementos repetidos */
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
