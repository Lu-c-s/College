package exer16.pc3;

import java.util.Random;

public class Generator {
	/* The eye candy *-*
	 * Sorry but i like it :|
	 */
	public static String GenAgencia() {
		// Molde => XXXX-A         X = Numeros , A = Letra
		String numbers = "0123456789";
		String letter ="ABCDEFGHIJKLMNOPQRSTUVXYZ";
		Random r = new Random();
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0 ; i < 4 ; i++) {
			sb.append(numbers.charAt(r.nextInt(numbers.length())));
		}
		sb.append("-");
		sb.append(letter.charAt(r.nextInt(letter.length())));
		
		return sb.toString();		
	}
	public static String GenCPF() {
		// Molde => XXX.XXX.XXX-XX    , X = Numeros    
		String numbers = "0123456789";
		Random r = new Random();
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0 ; i < 14 ; i++) {
			sb.append(numbers.charAt(r.nextInt(numbers.length())));
			if(i == 2 || i == 6 ) {
				sb.append(".");
				i++;
			}
			if(i == 10) {
				sb.append("-");
				i++;
			}
		}
		return sb.toString();
	}
	public static String GenName() {
		// Simplesmente escolhe um nome aleatório do vetor names
	String[] names = {"Adélia","Agnes","Alice","Amália","Amanda","Ana","Anabela","Abelard","Álvaro","Benício","Benjamim","Bento"
			,"Bernardo","enrique","Hugo","Inácio","João"};
		Random r = new Random();
	
		return names[r.nextInt(names.length)];
	}
	public static Integer GenNumero() {
		// gera um numero inteiro aleatorio até 4000
		Random r = new Random();
		return r.nextInt(4000);
	}
	
	public static String GenRg() {
		// Molde => XXXXXXX    , X = Numeros    
		String numbers = "0123456789";
		Random r = new Random();
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0 ; i < 7 ; i++) {
			sb.append(numbers.charAt(r.nextInt(numbers.length())));
		}
		return sb.toString();
	}
	public static String GenDN() {
		// Molde => XXX.XXX.XXX-XX    , X = Numeros    
		Random r = new Random();
		int Min = 2000;
		int Max = 2017;
		return r.nextInt(30) + "/" + r.nextInt(11) + "/" + (Min + r.nextInt(Max - Min + 1));
		// gera uma data de nascimento entre com ano variando entre 2000 e 2017
		// o janeiro = 0, :|
	}
	
	
}
