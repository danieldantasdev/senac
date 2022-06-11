package br.senac.rj.empresa.modelo;

public class Gerente extends Funcionario {

	@Override
	public void aplicarBonificacao() {
		this.salario = this.salario + this.bonificacao;
	}

}
