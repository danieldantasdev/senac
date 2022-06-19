package br.senac.rj.empresa.modelo;

import java.util.Scanner;

public class TesteMaterial1 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        int opcao;
        int codigo;
        String descricao;
        Material material = new Material();

        try (Scanner sc = new Scanner(System.in)) {
            int qtdeEstoque;

            do {
                System.out.println("1 - Cadastrar Material");
                System.out.println("2 - Entrar Material");
                System.out.println("3 - Sair Material");
                System.out.println("4 -  Consultar Saldo em estoque");
                System.out.println("5 -  Sair...");
                System.out.println("Digite a op��o desejada: ");
                opcao = Integer.parseInt(sc.nextLine());

                switch (opcao) {
                    case 1:
                        System.out.println("Digite o c�digo do material: ");
                        codigo = Integer.parseInt(sc.nextLine());
                        System.out.println("Digite a descri��o do material: ");
                        descricao = sc.nextLine();
                        System.out.println("Digite a quantidade em estoque: ");
                        qtdeEstoque = Integer.parseInt(sc.nextLine());
                        material.setCodMaterial(codigo);
                        material.setDescMaterial(descricao);
                        material.setQtdMaterial(qtdeEstoque);
                        break;
                    case 2:
                        System.out.println("Digite a quantidade a ser entregue: ");
                        qtdeEstoque = Integer.parseInt(sc.nextLine());
                        material.entrarMaterial(qtdeEstoque);
                        break;
                    case 3:
                        System.out.println("Digite a quantidade a ser retirada: ");
                        qtdeEstoque = Integer.parseInt(sc.nextLine());
                        material.sairMaterial(qtdeEstoque);
                        break;
                    case 4:
                        System.out.println("Saldo em estoque: " + material.getQtdMaterial());
                        break;
                    case 5:
                        System.out.println("Saindo...");
                        break;

                    default:

                        break;

                }
            } while (opcao != 5);
        } catch (NumberFormatException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

}
