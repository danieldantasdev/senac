package br.com.jdbc.repository;

public class ContaCorrenteNormal extends Conta {
	public ContaCorrenteNormal() {
		super();
		// TODO Auto-generated constructor stub
	}

	public boolean saca (double valor) {
		double novoSaldo = this.saldo - valor;
		if (novoSaldo < 0) 
			return false;
		this.saldo = novoSaldo;
		return true;
	}
}
