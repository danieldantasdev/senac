package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteFuncionario1 {

	public static void main(String[] args) {
		Funcionario func = new Funcionario();
		int registro;
		String nome;
		int cargo;
		double salario;
		Scanner sc = new Scanner(System.in);
		System.out.print("Entre com o registro: ");
		registro = Integer.parseInt(sc.nextLine());
		func.setRegistro(registro);
		System.out.print("Entre com o nome: ");
		nome = sc.nextLine();
		func.setNome(nome);
		System.out.print("Entre com o cargo: ");
		cargo = Integer.parseInt(sc.nextLine());
		func.setCargo(cargo);
		System.out.print("Entre com o salário: ");
		salario = Double.parseDouble(sc.nextLine());
		func.setSalario(salario);
		System.out.println("Salário = " + func.getSalario());
		func.aplicarBonificacao();
		System.out.println("Salário final = " + func.getSalario());
	}

}
