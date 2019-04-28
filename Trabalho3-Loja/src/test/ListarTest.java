package test;

import java.util.List;

import controller.ProdutoController;
import model.Produto;

public class ListarTest {

	public static void main(String[] args) {
		ProdutoController prodcontrol = new ProdutoController();
		List<Produto> lista = prodcontrol.listaTodos();
		
		if(lista != null) {
			for(Produto p : lista) {
				System.out.println("Nome : " + p.getNome());
				System.out.println("Preço : " + p.getPreco());
				System.out.println("Quantidade em Estoque : " + p.getQntEmEstoque());
				System.out.println("Id : " + p.getId() + "\n");
			}
		}
	}

}
