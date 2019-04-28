package model;


public class Produto {
     private Integer id;
     private String nome;
     private Double preco;
     private Integer qntEmEstoque;
	
    public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Double getPreco() {
		return preco;
	}
	public void setPreco(Double preco) {
		this.preco = preco;
	}
	public int getQntEmEstoque() {
		return qntEmEstoque;
	}
	public void setQntEmEstoque(int qntEmEstoque) {
		this.qntEmEstoque = qntEmEstoque;
	}
	public synchronized int adicionarEstoque(int qnt) {
		System.out.println("Colocando :" + qnt);
		int novoQnt = qntEmEstoque + qnt;
		System.out.println("Nova Quantidade é " + novoQnt);
		qntEmEstoque = novoQnt;
		
		notifyAll();
		return qntEmEstoque;
	}
	public synchronized int venda(int qnt) throws InterruptedException{
		while(qntEmEstoque < qnt) {
			wait();
		}
		System.out.println("Comprado "+ qnt);
		int novoEstoque = qntEmEstoque - qnt;
		System.out.println("Novo estoque é " + novoEstoque);
		qntEmEstoque = novoEstoque;
		
		return qntEmEstoque;
		
	}
     
}
