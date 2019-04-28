package exer6.pc3;

import java.util.Random;

public class Servico implements Comparable<Servico> {
	String codigo;
	String descricao;
	Double precoHora;
	Double qtdeHora;
	// descri��o = nome do produto(?)
	
	public Servico(Double precoHora) {
		this.precoHora = precoHora;
		this.codigo = gerarCodigo();
	}
	public Double calcPrecoHora(Double qtdeHora) {
		return (this.precoHora)*qtdeHora;
	}
	public String gerarCodigo() {
		/*Eye candy ie. gera um codigo aleatorio para o produto/objeto assim que o objeto � criado  */
		String possible = "ABCDEFGHIJKLNMOPQRSTUVXYZ123456789";
		Random r = new Random();
		StringBuilder st = new StringBuilder();
		for(int i = 0 ; i < 6 ; i++) {
			st.append(possible.charAt(r.nextInt(possible.length())));
		}
		return st.toString();
	}
	@Override
	public String toString() {
		/* Impreme as paradinhsa */
		return "Codigo : "+ codigo + " "+
				"Descri��o :" + descricao + " "+
				"Pre�o por hora :" + precoHora + " "+
				"Quantidade de Horas :" + qtdeHora + "\n";
	}
	@Override
	public int compareTo(Servico s) {
		/* � necess�rio modificar a classe compareTo para que o m�todo sort da classe colections possa */
		/* order pela descricao  */
		return this.descricao.compareTo(s.descricao);
	}
}
