package test;

import controller.ProdutoController;
import model.Produto;

public class CadastroTeste {

	public static void main(String[] args) {
		Produto prod = new Produto();
		ProdutoController pdcontrol = new ProdutoController();
		
		prod.setId(6);
		prod.setNome("Porca");
		prod.setPreco(4.54);
		prod.setQntEmEstoque(8);
		
		System.out.println(pdcontrol.cadastrar(prod));
	}

}
