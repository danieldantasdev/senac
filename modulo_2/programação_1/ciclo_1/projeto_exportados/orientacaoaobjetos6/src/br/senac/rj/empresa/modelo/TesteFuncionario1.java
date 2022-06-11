package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteFuncionario1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o registro do funcion�rio: ");
		int registro = Integer.parseInt(sc.nextLine());

		System.out.print("Entre com nome do funcion�rio: ");
		String nome = sc.nextLine();

		System.out.print("Entre com o cargo do funcion�rio: ");
		int cargo = Integer.parseInt(sc.nextLine());

		System.out.print("Entre com o sal�rio do funcion�rio: ");
		double salario = Double.parseDouble(sc.nextLine());

		// System.out.println("Sal�rio = " + func1.getSalario());

		String gerente;
		boolean continua = true;
		double bonificacao = 0;
		do {
			System.out.print("� gerente (s/n)? ");
			gerente = sc.nextLine();
			gerente = gerente.toUpperCase();
			if (gerente.equals("S") || gerente.equals("N"))
				continua = false;
		} while (continua);

		if (gerente.equals("S")) {
			System.out.print("Informe a bonifica��o: ");
			bonificacao = Double.parseDouble(sc.nextLine());
		}

		if (gerente.equals("S")) {
			Gerente ger1 = new Gerente();
			ger1.setRegistro(registro);
			ger1.setNome(nome);
			ger1.setCargo(cargo);
			ger1.setSalario(salario);
			ger1.setBonificacao(bonificacao);
			ger1.aplicarBonificacao();
			System.out.println("O novo sal�rio de " + nome + " � " + ger1.getSalario());
		} else {
			Funcionario func1 = new Funcionario();
			func1.setRegistro(registro);
			func1.setNome(nome);
			func1.setCargo(cargo);
			func1.setSalario(salario);
			func1.aplicarBonificacao();
			System.out.println("O novo sal�rio de " + nome + " � " + func1.getSalario());
		}
	}
}
