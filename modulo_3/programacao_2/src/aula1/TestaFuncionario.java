package aula1;

public class TestaFuncionario {
	public static void main(String[] args) {
		Funcionario funcionario1 = new Funcionario();
		
		funcionario1.nome = "Daniel";
		funcionario1.salario = 3000;
		funcionario1.status = "ATIVO";
		
		System.out.println("Salário do Daniel: " + funcionario1.salario);
		funcionario1.bonificacao(100);
		System.out.println("Salario com bonus: " + funcionario1.salario);
	}
}
