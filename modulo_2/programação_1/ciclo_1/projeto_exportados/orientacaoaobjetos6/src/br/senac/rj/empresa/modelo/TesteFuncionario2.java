package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteFuncionario2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o registro do funcionário: ");
		int registro = Integer.parseInt(sc.nextLine());

		System.out.print("Entre com nome do funcionário: ");
		String nome = sc.nextLine();

		System.out.print("Entre com o cargo do funcionário: ");
		int cargo = Integer.parseInt(sc.nextLine());

		System.out.print("Entre com o salário do funcionário: ");
		double salario = Double.parseDouble(sc.nextLine());

		// System.out.println("Salário = " + func1.getSalario());

		String gerente;
		boolean continua = true;
		double bonificacao = 0;
		do {
			System.out.print("É gerente (s/n)? ");
			gerente = sc.nextLine();
			gerente = gerente.toUpperCase();
			if (gerente.equals("S") || gerente.equals("N"))
				continua = false;
		} while (continua);

		if (gerente.equals("S")) {
			System.out.print("Informe a bonificação: ");
			bonificacao = Double.parseDouble(sc.nextLine());
		}

		Funcionario func1 = null;
		if (gerente.equals("S")) {
			func1 = new Gerente();
			func1.setBonificacao(bonificacao);
		} else
			func1 = new Analista();

		func1.setRegistro(registro);
		func1.setNome(nome);
		func1.setCargo(cargo);
		func1.setSalario(salario);

		func1.aplicarBonificacao(); // Se for gerente executará o método aplicarBonificacao da classe Gerente
		System.out.println("Bonificação = " + func1.getBonificacao());
		System.out.println("O novo salário de " + nome + " é " + func1.getSalario());
	}
}
