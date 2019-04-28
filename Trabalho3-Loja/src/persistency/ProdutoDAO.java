package persistency;

import java.util.List;

import model.Produto; 

public interface ProdutoDAO {
	public String cadastrar(Produto prod);
	
	public String editar(Produto prod);
	
	public String excluir(Produto prod);
	
	public List<Produto> listaTodos();
	
	public Produto pesquisarPorNome(String nome);
	
	public Produto pesquisarPorID(int id);
		
}
