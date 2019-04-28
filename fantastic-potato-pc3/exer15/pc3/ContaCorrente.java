package exer15.pc3;

public class ContaCorrente {
	 @SuppressWarnings("unused")
	private String Agencia;
	private int Numero;
	 @SuppressWarnings("unused")
	private String Nome; 
    @SuppressWarnings("unused")
	private String CPF;
    @SuppressWarnings("unused")
    private Double Saldo;
   
    @Override
    public boolean equals(Object o) {
    	if(this.getNumero() == ((ContaCorrente)o).getNumero()){
    		return true;
    	}
    	return false;
    }
    
    public int getNumero() {
    	return this.Numero;
    }
    
    @Override
    public int hashCode() {
    	return getNumero();
    }
    
    public void setAgencia(String agencia) {
		this.Agencia = agencia;
	}

	public void setNumero(int numero) {
		this.Numero = numero;
	}

	public void setNome(String nome) {
		this.Nome = nome;
	}

	public void setCPF(String cPF) {
		this.CPF = cPF;
	}

	public void setSaldo(Double saldo) {
		this.Saldo = saldo;
	}
    /*
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + Numero;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		ContaCorrente other = (ContaCorrente) obj;
		if (Numero != other.Numero)
			return false;
		return true;
	}
    */

	@Override
	public String toString() {
		return "ContaCorrente [Agencia=" + Agencia + ", Numero=" + Numero + ", Nome=" + Nome + ", CPF=" + CPF
				+ ", Saldo=" + Saldo + "]";
	} 
	
}
