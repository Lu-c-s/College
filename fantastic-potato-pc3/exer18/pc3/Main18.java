/*18. Implemente código com a estrutura de dados definida no
exercício anterior, adicione alguns alunos com o mesmo RG, utilize a
classe Aluno do exercício 18(13?). Percorra todos os elementos, observe o
resultado. Existem alunos nesta turma com o mesmo código?*/

/* 20, pois não alteramos a função hashcode() na classe Aluno após a alteração só é inserido  1 aluno pois todos contem o mesmo rg */

package exer18.pc3;
import exer13.pc3.Aluno;
import java.util.HashSet;
import exer16.pc3.Generator;
import java.util.Iterator;

public class Main18 {
	public static void main(String args[]) {
		HashSet<Aluno> hs = new HashSet<>();
		
		for(int i = 0 ; i < 20 ; i++) {
			Aluno a = new Aluno();
			a.setDn(Generator.GenDN());
			a.setNome(Generator.GenName());
			a.setRg("1234567");
			
			hs.add(a);
		}
		
		Iterator<Aluno> it = hs.iterator();
		
		while(it.hasNext()) {
			System.out.println(it.next());
		}
		
		
	}
}
