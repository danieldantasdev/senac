package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteFuncionario1 {

	public static void main(String[] args) {
		Funcionario func1 = new Funcionario();
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Entre com o registro do funcionário: ");
		int registro = Integer.parseInt(sc.nextLine());
		func1.setRegistro(registro);

		System.out.print("Entre com nome do funcionário: ");
		String nome = sc.nextLine();
		func1.setNome(nome);

		System.out.print("Entre com o cargo do funcionário: ");
		int cargo = Integer.parseInt(sc.nextLine());
		func1.setCargo(cargo);

		System.out.print("Entre com o salário do funcionário: ");
		double salario = Double.parseDouble(sc.nextLine());
		func1.setSalario(salario);

		System.out.println("Salário = " + func1.getSalario());
		func1.aplicarBonificacao();
		System.out.println("O novo salário de " + nome + " é " + func1.getSalario());
	}
}
