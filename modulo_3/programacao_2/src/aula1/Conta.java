package aula1;

public class Conta {
	int numero;
	String nome;
	double saldo;
	double limite;
	
	
	
	public int getNumero() {
		return numero;
	}



	public void setNumero(int numero) {
		this.numero = numero;
	}



	public String getNome() {
		return nome;
	}



	public void setNome(String nome) {
		this.nome = nome;
	}



	public double getSaldo() {
		return saldo;
	}



	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}



	public double getLimite() {
		return limite;
	}



	public void setLimite(double limite) {
		this.limite = limite;
	}



	void sacar (double valor) {
		double saldoAlterado = getSaldo() - valor;
		this.saldo = saldoAlterado;
	}
	
	void depositar(double valor) {
		this.saldo += valor;
	}
}

