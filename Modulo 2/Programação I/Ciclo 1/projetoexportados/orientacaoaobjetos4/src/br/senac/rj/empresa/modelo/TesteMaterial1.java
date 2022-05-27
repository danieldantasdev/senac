package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteMaterial1 {

	public static void main(String[] args) {
		int codigo;
		String descricao;
		int opcao;
		Material material = new Material();
		Scanner sc = new Scanner(System.in);
		int qtde;
		do {
			System.out.println("1 - Cadastrar material");
			System.out.println("2 - Entrar material");
			System.out.println("3 - Sair material");
			System.out.println("4 - Consultar saldo em estoque");
			System.out.println("5 - Encerrar");
			System.out.print("Entre com uma opção: ");
			opcao = Integer.parseInt(sc.nextLine());
			if (opcao < 1 || opcao > 5)
				System.out.println("Opção incorreta!");
			else {
				switch (opcao) {
				case 1:
					System.out.println("Entre com o código do material: ");
					codigo = Integer.parseInt(sc.nextLine());
					material.setCodMaterial(codigo);
					System.out.println("Entre com a descrição do material: ");
					descricao = sc.nextLine();
					material.setDescMaterial(descricao);
					break;
				case 2:
					System.out.println("Entre a quantidade a entrar: ");
					qtde = Integer.parseInt(sc.nextLine());
					material.entrarMaterial(qtde);
					break;
				case 3:
					System.out.println("Entre a quantidade a sair: ");
					qtde = Integer.parseInt(sc.nextLine());
					material.sairMaterial(qtde);
					break;
				case 4:
					System.out.println("Código: " + material.getCodMaterial());
					System.out.println("Descrição: " + material.getDescMaterial());
					System.out.println("Saldo: " + material.getQtdeEstoque());
					break;
				}
			}
		} while (opcao != 5);
		

	}

}
