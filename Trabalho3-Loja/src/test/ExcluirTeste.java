package test;

import controller.ProdutoController;
import model.Produto;

public class ExcluirTeste {
	public static void main(String args[]) {
	Produto prod = new Produto();
	ProdutoController prodcontrol = new ProdutoController();
	
	prod.setId(6);
	System.out.println(prodcontrol.excluir(prod));
	
	}
}
