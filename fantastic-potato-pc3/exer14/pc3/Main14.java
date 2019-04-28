/*14. Compare o desempenho das coleções HashMap e HashSet. Insira
nas duas coleções um total de 20.000 alunos (da classe do exercício
anterior) e pesquise por um deles, compare o tempo de pesquisa em
cada uma das coleções*/

package exer14.pc3;
import exer13.pc3.Aluno;
import exer16.pc3.Generator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Calendar;

public class Main14 {

	public static void main(String[] args) {
		HashSet<Aluno> hs = new HashSet<>();
		HashMap<Integer,Aluno> hm = new HashMap<>();
		
		
		// inserindo no HashSet
		long hsTmI = Calendar.getInstance().getTimeInMillis();
		for(int i = 0 ; i < 20000 ; i++) {
			Aluno a = new Aluno();
			
				a.setNome(Generator.GenName());
				a.setRg(Generator.GenRg()); // isso aqui vai dar uns probleminhas mas né fazer o que  ¯\_(ツ)_/¯
				a.setDn(Generator.GenDN());
				
				hs.add(a);
		}
		long hsTmF = Calendar.getInstance().getTimeInMillis();
		
		// Inserindo no HashMap
		long hmTmI = Calendar.getInstance().getTimeInMillis();
		for(int i = 0 ; i < 20000 ; i++) {
			Aluno a = new Aluno();
			
				a.setNome(Generator.GenName());
				a.setRg(Generator.GenRg()); // isso aqui vai dar uns probleminhas mas né fazer o que  ¯\_(ツ)_/¯
				a.setDn(Generator.GenDN());
				
				hm.put(i, a);
		}
		long hmTmF = Calendar.getInstance().getTimeInMillis();
		
		System.out.println("Tempo de inserção HashSet = " +( hsTmF - hsTmI));
		System.out.println("Tempo de inserção HashMap = " +( hmTmF - hmTmI));
	
		// pelo fato de eu gerar RG aleatorios preciso adicionar manualmente um RG que eu sei que existirá na nos HashSet e HashMap,
		// para poder buscar
		Aluno b = new Aluno();		
		b.setNome(Generator.GenName());
		b.setRg("1234567"); 
		b.setDn(Generator.GenDN());
		
		hs.add(b);
		hm.put(20000,b);
		
		// fazendo uma busca na HashSet
		long hsBTmI = Calendar.getInstance().getTimeInMillis();
		if(hs.contains("1234567")) {
			System.out.println("OK! - HS");
		}
		long hsBTmF = Calendar.getInstance().getTimeInMillis();
		
		long hmBTmI = Calendar.getInstance().getTimeInMillis();
		if(hm.containsValue("1234567")) {
			System.out.println("OK! - HM");
		}
		long hmBTmF = Calendar.getInstance().getTimeInMillis();
		
		System.out.println("Tempo de busca pelo RG 1234567 HashSet = " +( hsBTmF - hsBTmI));
		System.out.println("Tempo debusca pelo RG 123456  HashMap = " +( hmBTmF - hmBTmI));
		
		
	}
}
