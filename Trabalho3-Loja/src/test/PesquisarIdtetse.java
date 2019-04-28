package test;

import controller.ProdutoController;
import model.Produto;

public class PesquisarIdtetse {
	public static void main(String args[]) {
		ProdutoController pdcontrol = new ProdutoController();
		Produto p = new Produto();
		
		p = pdcontrol.pesquisarPorNome("Carro ZZ");
		
		if(p != null) {
			System.out.println("Nome : " + p.getNome());
			System.out.println("Preço : " + p.getPreco());
			System.out.println("Quantidade em Estoque : " + p.getQntEmEstoque());
			System.out.println("Id : " + p.getId() + "\n");
		}
	}
}
