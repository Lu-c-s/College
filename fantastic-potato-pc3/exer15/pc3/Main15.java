/*15. Implemente uma classe ContaCorrente com os atributos Agencia,
Numero, Nome, CPF e Saldo. Sobrescreva os métodos equals() de
forma que duas contas correntes sejam consideradas iguais apenas
se possuírem o mesmo Numero, e sobrescreva o método hashCode().*/


package exer15.pc3;

public class Main15 {

	public static void main(String[] args) {
		ContaCorrente cc = new ContaCorrente();
		ContaCorrente cc2 = new ContaCorrente();
		
		cc.setAgencia("0354-X");
		cc.setCPF("03426678911");
		cc.setNome("Alrta");
		cc.setNumero(123456);
		cc.setSaldo(1245.7);
		
		cc2.setAgencia("0354-X");
		cc2.setCPF("0342667841");
		cc2.setNome("Alrta");
		cc2.setNumero(1234567);
		cc2.setSaldo(1245.7);
		
		if(cc.equals(cc2)) {
			System.out.println("As contas são iguais");
		}
		else {
			System.out.println("As contas são diferentes");
		}
		
	
	}

}
