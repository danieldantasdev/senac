package br.senac.rj.empresa.modelo;

public class TesteMaterial1 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        int opcao;
        Material material = new Material();
        do {
            System.out.println("1 - Cadastrar Material");
            System.out.println("2 - Listar Material");
            System.out.println("3 - Excluir Material");
            System.out.println("4 - Sair");
            opcao = Integer.parseInt(System.console().readLine());
            switch (opcao) {
                case 1:
                    material.cadastrarMaterial();
                    break;
                case 2:
                    material.listarMaterial();
                    break;
                case 3:
                    material.excluirMaterial();
                    break;
                case 4:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }
        } while (opcao != 4);
    }
}