package aula1;

public class Funcionario {
	String cpf;
	String nome;
	String departamento;
	String status;
	double salario;
	
	void bonificacao(double bonus) {
		salario += bonus;
	}
	
	double getBonus() {
		return this.salario * 0.05;
	}
}
