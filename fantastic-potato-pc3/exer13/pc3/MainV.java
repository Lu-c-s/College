/*13. Crie uma classe Aluno com os atributos Nome , RG e data de
nascimento. Sobrescreva o método equals() de forma que dois alunos
sejam considerados iguais apenas se possuírem o mesmo RG.*/

package exer13.pc3;

public class MainV {
	public static void main(String args[]) {
		Aluno a1 = new Aluno();
		Aluno a2 = new Aluno();
		
		a1.setNome("Abc");
		a1.setRg("15978");
		a1.setDn("21/04/1996");
		
		a2.setNome("Efg");
		a2.setRg("15978"); 
		a2.setDn("29/06/1976");
		
		if(a1.equals(a2)) {
			System.out.println("mesmo rg");
		}
		else {
			System.out.println("nao sao o mesmo duh");
		}
	}
}
