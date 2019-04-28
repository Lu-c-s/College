/*13. Crie uma classe Aluno com os atributos Nome , RG e data de
nascimento. Sobrescreva o método equals() de forma que dois alunos
sejam considerados iguais apenas se possuírem o mesmo RG.*/

package exer13.pc3;


public class Aluno {
	@SuppressWarnings("unused")
	private String nome;
	private String rg;
	@SuppressWarnings("unused")
	private String dn;
    
	/* Mine
	@Override
	public boolean equals(Object o) {
		if(this.getRg() == ((Aluno)o).getRg()) {
			return true;
		}
		return false;
	}
	*/
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setRg(String rg) {
		this.rg = rg;
	}
	public void setDn(String dn) {
		this.dn = dn;
	}
	
	public String getRg() {
		return this.rg;
	}
	
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((rg == null) ? 0 : rg.hashCode());
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
		Aluno other = (Aluno) obj;
		if (rg == null) {
			if (other.rg != null)
				return false;
		} else if (!rg.equals(other.rg))
			return false;
		return true;
	}
	/*
	@Override Mine
	public String toString() {
		return "Aluno [nome=" + nome + ", rg=" + rg + ", dn=" + dn + "]";
	}
	*/
	
}
