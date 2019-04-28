/*8. Faça um HashMap e insira as Strings “String 1”, “String 2” e “String
3” cada uma duas vezes, utilize o numeral como chave, percorra
todos os elementos e imprima (System.out.println()). Observe o
resultado. Quantos elementos têm a coleção?
*/
/* nao vimos */
/*R = 6  */
package exer8.pc3;

import java.util.HashMap;


public class MainG {
	public static void main(String args[]) {
		HashMap<Integer,String> hm = new HashMap<>();
		hm.put(1, "String 1");
		hm.put(2, "String 2");
		hm.put(3, "String 3");
		hm.put(4, "String 1");
		hm.put(5, "String 2");
		hm.put(6, "String 3");
		
		System.out.println(hm);
	}
}
