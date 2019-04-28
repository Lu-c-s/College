package test;

import java.sql.Connection;

import persistency.ConnectionFactory;

public class ConTest {
	public static void main(String args[]) {
		Connection con = ConnectionFactory.getConnection();
		if(con != null) {
			System.out.println("OK!");
		}
	}
}
