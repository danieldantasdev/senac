package br.senac.rj.teste;

public class Conta {
	private String titular;
	private int agencia;
	private int numero;
	protected double saldo;

	public Conta() {
		this.titular = "";
	}

	public Conta(int agencia, int numero, double saldo) {
		// super();
		this();
		this.agencia = agencia;
		this.numero = numero;
		this.saldo = saldo;
		// this.titular = titular;
	}

	public int getAgencia() {
		return agencia;
	}

	public void setAgencia(int agencia) {
		this.agencia = agencia;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public double getSaldo() {
		return saldo;
	}

	// public void setSaldo(double saldo) {
	// this.saldo = saldo;
	// }

	public void deposita(double valor) {
		this.saldo = this.saldo + valor;
	}

	public String getTitular() {
		return titular;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	public boolean saca(double valor) {
		double novoSaldo = this.saldo - valor;
		if (novoSaldo < 0)
			return false;
		this.saldo = novoSaldo;
		return true;
	}
}
