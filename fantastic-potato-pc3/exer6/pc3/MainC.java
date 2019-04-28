package exer6.pc3;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;


public class MainC {
	public static void main(String args[]) {
	List<Servico> l1 = new ArrayList<Servico>();
	Scanner sc = new Scanner(System.in);
	
	String sair = " ";
	
	while(!sair.equalsIgnoreCase("sim")) {
		System.out.println("Digite o valor da hora :");
		Double y = Double.parseDouble(sc.nextLine());
		Servico x = new Servico(y);
		
		System.out.println("Digite a descrição :");
		x.descricao = sc.nextLine();
		System.out.println("Digite a quantidade de horas : ");
		x.qtdeHora = Double.parseDouble(sc.nextLine());
		
		l1.add(x);
		
		System.out.println("Deseja sair? digite sim caso contrario digite nao");
		sair = sc.nextLine();
	}
	
	Collections.sort(l1);
	System.out.println(l1);
	sc.close();
	}
}
