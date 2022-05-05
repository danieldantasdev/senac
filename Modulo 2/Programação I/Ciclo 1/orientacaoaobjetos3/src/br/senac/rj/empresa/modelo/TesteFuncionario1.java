package br.senac.rj.empresa.modelo;

public class TesteFuncionario1 {

	public static void main(String[] args) {
		Funcionario funcionario1 = new Funcionario();
		
		funcionario1.setCargo(3);
		funcionario1.setNome("Daniel");
		funcionario1.setRegistro(2);
		funcionario1.setSalario(2000);

		System.out.println("Salario sem a bonificação = " + funcionario1.getSalario());
		
		funcionario1.aplicarBonificacao(0);
		
		System.out.println("Salario com a bonificação = " + funcionario1.getSalario());
				
//		System.out.println("Salario com a bonificação = " + funcionario1.aplicarBonificacao(0));
	}

}
