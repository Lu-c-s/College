package persistency;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import model.Produto;

public class ProdutoDAOImp implements ProdutoDAO{

	@Override
	public String cadastrar(Produto prod) {
		String sql ="insert into produto(id,nome,preco,qntemestoque) values(?,?,?,?)";
		Connection con = ConnectionFactory.getConnection();
		
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			pst.setInt(1, prod.getId());
			pst.setString(2, prod.getNome());
			pst.setDouble(3, prod.getPreco());
			pst.setInt(4, prod.getQntEmEstoque());
			
			int res = pst.executeUpdate();
			
			if(res > 0) {
				return "Inserido com sucesso";
			}
			else {
				return "Erro ao inserir";
			}
		}catch(SQLException e) {
			return e.getMessage();
		}
		finally {
			ConnectionFactory.close(con);
		}
	}

	@Override
	public String editar(Produto prod) {
		String sql = "update produto set nome=?,preco=?,qntemestoque=? where id=?";
		Connection con = ConnectionFactory.getConnection();
		
		try {
		PreparedStatement pst = con.prepareStatement(sql);	
			
		pst.setString(1, prod.getNome());
		pst.setDouble(2, prod.getPreco());
		pst.setInt(3, prod.getQntEmEstoque());
		pst.setInt(4, prod.getId());
		
		int res = pst.executeUpdate();
		if(res > 0) {
			return "Alterado com sucesso";
		}
		else {
			return "Erro ao alterar";
			}
		}
		catch(SQLException e) {
			return e.getMessage();
		}
		finally {
			ConnectionFactory.close(con);
		}
	}

	@Override
	public String excluir(Produto prod) {
		String sql =" delete from produto where id=?";
		Connection con = ConnectionFactory.getConnection();
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			pst.setInt(1, prod.getId());
			int res = pst.executeUpdate();
			if(res > 0) {
				return "Excluido com sucesso";
			}else {
				return "Erro ao excluir";
			}
		}catch(SQLException e) {
			return e.getMessage();
		}finally {
			ConnectionFactory.close(con);
		}
	}

	@Override
	public List<Produto> listaTodos() {
		String sql = "select * from produto";
		Connection con = ConnectionFactory.getConnection();
		
		List<Produto> lista = new ArrayList<>();
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			ResultSet rs = pst.executeQuery();
			
			if(rs != null) {
				while(rs.next()) {
					Produto prod = new Produto();
					
					prod.setNome(rs.getString(1));
					prod.setPreco(rs.getDouble(2));
					prod.setQntEmEstoque(rs.getInt(3));
					prod.setId(rs.getInt(4));
					
					lista.add(prod);
				}
				return lista;
			}
			else {
				return null;
			}
		}
		catch(SQLException e) {
			return null;
		}
		finally {
			ConnectionFactory.close(con);
		}
	}

	@Override
	public Produto pesquisarPorNome(String nome) {
		String sql = "select * from produto where nome=?";
		Connection con = ConnectionFactory.getConnection();
		
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			pst.setString(1, nome);
			
			ResultSet rs = pst.executeQuery();
			if(rs.next()) {
				Produto p = new Produto();
				p.setNome(rs.getString(1));
				p.setPreco(rs.getDouble(2));
				p.setQntEmEstoque(rs.getInt(3));
				p.setId(rs.getInt(4));
				
				return p;
			}
			else {
				return null;
			}
		}
		catch(SQLException e){
			return null;
		}
		finally {
			ConnectionFactory.close(con);
		}
	}

	@Override
	public Produto pesquisarPorID(int id) {
		String sql = "select * from produto where id=?";
		Connection con = ConnectionFactory.getConnection();
		
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			pst.setInt(1, id);
			
			ResultSet rs = pst.executeQuery();
			if(rs.next()) {
				Produto p = new Produto();
				p.setNome(rs.getString(1));
				p.setPreco(rs.getDouble(2));
				p.setQntEmEstoque(rs.getInt(3));
				p.setId(rs.getInt(4));
				
				return p;
			}
			else {
				return null;
			}
		}
		catch(SQLException e){
			return null;
		}
		finally {
			ConnectionFactory.close(con);
		}
	}

}
