package model;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import persistency.ConnectionFactory;

public class Compra extends Thread {
	private Produto prod;
	private Integer qnt;
	
	private static final int ESP = 10;
	
	public Compra(Produto prod,int qnt) {
		this.prod = prod;
		this.qnt = qnt;
	}
	
	@Override
	public void run() {
		String sql = "update produto set qntemestoque=? where id=?";
		Connection con = ConnectionFactory.getConnection();
		
		try {			
			PreparedStatement pst = con.prepareStatement(sql);
		
			pst.setInt(1, prod.adicionarEstoque(qnt));
			pst.setInt(2, prod.getId());	
			
			int res = pst.executeUpdate();			
			if(res > 0) {
				System.out.println("Adiocionado no Estoque com sucesso");
			}
			else {
				System.out.println("Erro ao adicionar no estoque");
				}
			sleep(ESP);
		}
		catch(InterruptedException ie){
			System.out.println(ie.getMessage());
		}catch(SQLException e) {
			System.out.println(e.getMessage());
		}
	}
}
