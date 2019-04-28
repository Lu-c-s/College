package model;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import controller.ProdutoController;
import persistency.ConnectionFactory;

public class Venda extends Thread{
	private Produto prod;
	private Integer qnt;
	
	private static final int ESP = 10;
	
	public Venda(Produto prod,int qnt) {
		this.prod = prod;
		this.qnt = qnt;
	}
	
	@Override
	public void run() {
		Produto p = new Produto();
		ProdutoController pdcontrol = new ProdutoController();
		
		p = pdcontrol.pesquisarPorID(prod.getId());
		
		String sql = "update produto set qntemestoque=? where id=?";
		Connection con = ConnectionFactory.getConnection();
		
		try {
			PreparedStatement pst = con.prepareStatement(sql);
			pst.setInt(1,p.venda(qnt));
			pst.setInt(2, p.getId());
			
			int res = pst.executeUpdate();
			if(res > 0) {
				System.out.println("Vendido com sucesso");
			}
			else {
				System.out.println("Erro na venda");
				}
			sleep(ESP);
		}
		catch(InterruptedException ie){
			System.out.println(ie.getMessage());
		}
		catch(SQLException e) {
			System.out.println(e.getMessage());
		}
	}

}
