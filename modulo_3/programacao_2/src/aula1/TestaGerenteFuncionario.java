package aula1;

public class TestaGerenteFuncionario {
	public static void main(String[] args) {
		Funcionario f1 = new Funcionario();
		
		f1.setSalario(1000);
		System.out.println("O salario do funcionario eh: " + f1.getSalario());
		System.out.println("O salario do funcionario eh: " + f1.getBonus());
		
		Gerente g1 = new Gerente();
		
		g1.setSalario(10000);
		System.out.println("O salario do gerente eh: " + g1.getSalario());
		System.out.println("O salario do gerente eh: " + g1.getBonus());
	}
}
