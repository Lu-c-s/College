package controller;

import java.util.List;

import model.Produto;
import persistency.ProdutoDAOImp;

public class ProdutoController {
	
	public String cadastrar(Produto prod) {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.cadastrar(prod);
	}
	public String editar(Produto prod) {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.editar(prod);
	}
	public String excluir(Produto prod) {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.excluir(prod);
	}
	public List<Produto> listaTodos() {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.listaTodos();
	}
	public Produto pesquisarPorNome(String nome) {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.pesquisarPorNome(nome);
	}
	public Produto pesquisarPorID(int id) {
		ProdutoDAOImp dao = new ProdutoDAOImp();
		return dao.pesquisarPorID(id);
	}
}
