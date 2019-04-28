package test;

import model.Compra;
import model.Produto;
import model.Venda;

public class TesteCompraVenda {
	public static void main(String args[]) {
		
		Produto p = new Produto();
		p.setId(2);
		int qnt = 4;
		
		//p.adicionarEstoque(20);
		
		//Compra c = new Compra(p,20);
		Venda v = new Venda(p,qnt);
		//c.start();
		v.start();
		
	}
}
