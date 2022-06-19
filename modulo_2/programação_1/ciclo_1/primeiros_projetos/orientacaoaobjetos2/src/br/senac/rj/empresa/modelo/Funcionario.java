package br.senac.rj.empresa.modelo;

public class Funcionario {
	public int registro;
	public String nome;
	public int cargo;
	public double salario;

	public void aplicarBonificacao(double valor) {
		salario = salario * valor;
	}

/*	public void calcula(double valor) {
		// TODO Auto-generated method stub
		if (cargo == 1) {
			aplicarBonificacao(salario * v);
		} else if (cargo == 2) {
			aplicarBonificacao(salario * 0.4);
		} else if (cargo == 3) {
			aplicarBonificacao(salario * 0.6);
		} else {
			aplicarBonificacao(salario);
		}
	}*/
}
