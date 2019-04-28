package persistency;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConnectionFactory {
	
	public static Connection getConnection() {
		String driver = "org.postgresql.Driver";
		String user = "postgres";
		String senha = "postgres";
		String url ="jdbc:postgresql://127.0.0.1:5432/Store";
		Connection con = null;
		
		try {
			Class.forName(driver);
			con = (Connection) DriverManager.getConnection(url,user,senha);
		
		}catch(ClassNotFoundException ex) {
			System.err.println(ex.getMessage());
		}catch(SQLException e) {
			System.err.println(e.getMessage());
		}
		
		return con;
	}
	
	public static void close(Connection con) {
		try {
			con.close();
		}catch(SQLException e) {
			
		}
	}
}
