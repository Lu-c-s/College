package test;

import controller.ProdutoController;
import model.Produto;

public class EditarTest {

	public static void main(String[] args) {
		Produto prod = new Produto();
		ProdutoController prodcontrol = new ProdutoController();
		
		prod.setId(2);
		prod.setNome("Carro ZZ");
		prod.setPreco(60.66);
		prod.setQntEmEstoque(100);
		
		System.out.println(prodcontrol.editar(prod));
	}

}
