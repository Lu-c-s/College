/*16. Crie um HashSet e adicione 5 (cinco) ContaCorrente diferentes.
Imprima o resultado (System.out.println()).*/

package exer16.pc3;
import exer15.pc3.ContaCorrente;

import java.util.HashSet;
import exer16.pc3.Generator;
import java.util.Iterator;

public class Main16 {

	public static void main(String[] args) {
		HashSet<ContaCorrente> hs = new HashSet<>();
		for(int i = 0 ; i < 5 ; i++) {
		
		ContaCorrente cc = new ContaCorrente();
			
		cc.setAgencia(Generator.GenAgencia());
			cc.setCPF(Generator.GenCPF());
			cc.setNome(Generator.GenName());
			cc.setNumero(Generator.GenNumero());
			cc.setSaldo(1245.7*i);
			
			hs.add(cc);
		}
		Iterator<ContaCorrente> it = hs.iterator();
		
		while(it.hasNext()) {
			System.out.println(it.next());
		}
		
		
	}

}
